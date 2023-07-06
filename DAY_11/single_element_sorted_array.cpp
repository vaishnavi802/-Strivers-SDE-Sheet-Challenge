//finding single element in a sorted array

#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         if(nums.size() == 1) return nums[0];
//         int l = 0;
//         int r = nums.size() - 1;
        
//         if (nums[0] != nums[1]) 
//             return nums[0];
//         if (nums[r] != nums[r - 1]) 
//             return nums[r];  //corner cases
        
//         while (l <= r) {
//             int mid = l + (r - l) / 2;
//             if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])         {
//                 return nums[mid];
//             }  //found at middle
//             else if ((nums[mid] == nums[mid + 1] && mid % 2 == 0) || (nums[mid] == nums[mid - 1] && mid % 2 != 0)) 
//             {
//                 l = mid + 1;
//             }
//             else {
//                 r = mid - 1;
//             }
//         }
//         return nums[l];
//     }
// };

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int l = 0;
        int r = nums.size() - 1;
        while(l<r)
        {
            int mid=l+(r-l)/2;
            if(mid%2==1)
            {
                if(nums[mid]==nums[mid-1])
                {
                    l=mid+1;
                }
                else
                {
                    r=mid;
                }
            }
            else 
            {
                if(nums[mid]==nums[mid+1])
                {
                    l=mid+2;
                }
                else
                {
                    r=mid;
                }
            }
        }
        return nums[l];
    }
};

// Time Complexity: O(logn)
// Space Complexity: O(1)