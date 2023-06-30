//finding maximum consecutive ones in an array by flipping atmost k zeroes

#include<bits/stdc++.h>
using namespace std;

int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int i=0,j=0;
    int ans=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            cnt++; //counting zeros
        }
        while(cnt>k)
        {
            if(arr[j]==0)   //previous zero will be flipped to zero
                cnt--;
            j++;
        }
        ans=max(ans,i-j+1);   //length of subsegment from j to i
    }
    return ans;
}

// Time Complexity: O(n)
// Space Complexity: O(1)