//search given target in roatated and sorted array


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(nums[mid]==target)
            {
                return mid;
            }

            //left part is sorted 
            if(nums[low]<=nums[mid])
            {
                //check for left region of mid
                if(target>=nums[low] && target<=nums[mid])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            //right part is sorted
            else
            {
                //check for right region of mid
                if(target>=nums[mid] && target<=nums[high])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};
//time complexity=O(log n)
//space complexity=O(1)