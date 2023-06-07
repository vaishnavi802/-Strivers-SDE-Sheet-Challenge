//duplicate number in array 

#include <bits/stdc++.h>

int findDuplicate(vector<int> &nums, int n){
	// Write your code here.
	 sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]==nums[i])
            {
                return nums[i];
            }
        }
        return -1;
}

//time complexity O(nlogn)
//space complexity O(1)