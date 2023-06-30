//finding trapped rainwater in units

// we will calculate maxLeft and maxRight as we go.
// We start with maxLeft = height[0], maxRight = height[n-1], using 2 pointers left point to the next bar on the left side, right point to the next bar on the right side.
// How to decide to move left or move right?
// If maxLeft < maxRight, it means the water level is based on the left side (the left bar is smaller) then move left side:
// If height[left] > maxLeft then there is no trap water, we update maxLeft by maxLeft = height[left].
// Else if height[left] < maxLeft then it can trap an amount of water, which is maxLeft - height[left].
// Move left by left += 1
// Else if maxLeft > maxRight, it means the water level is based on the right side (the right bar is smaller) then move right side:
// If height[right] > maxRight then there is no trap water, we update maxRight by maxRight = height[right].
// Else if height[right] < maxRight then it can trap an amount of water, which is maxRight - height[right].
// Move right by right -= 1.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>left(n),right(n);
        for(int i=1;i<n;i++)
        {
            left[i]=max(left[i-1],height[i-1]);
        }
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(right[i+1],height[i+1]);
        }

        int res=0;
        for(int i=0;i<n;i++)
        {
            int ans=min(left[i],right[i]);
            if(ans>=height[i])
                res+=(ans-height[i]);
        }
        return res;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)