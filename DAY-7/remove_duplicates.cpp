//removing duplicates from sorted array without using extra space

#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n=nums.size();
    if(n==0)
        return 0;
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(nums[i]!=nums[j])
        {
            i++;
            nums[i]=nums[j];
        }
    }
    return i+1;
}

// Time Complexity: O(n)
// Space Complexity: O(1)