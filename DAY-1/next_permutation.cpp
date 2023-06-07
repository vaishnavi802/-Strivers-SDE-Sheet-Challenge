//Finding the next permutation of given permutation

#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
    //  Write your code here.
        int k;
        int l;
        for(k=n-2;k>=0;k--)
        {
            if(nums[k]<nums[k+1]) //finding break point
            {
                break;
            }
        }

        if(k<0)
        {
            reverse(nums.begin(),nums.end()); //if descending order
        }
        else
        {
            for(l=n-1;l>k;l--)
            {
                if(nums[l]>nums[k])      //finding next grater element after breaking point
                {
                    break;
                }
            }
            swap(nums[k],nums[l]);      //by swapping breaking point and next greater element
            reverse(nums.begin()+k+1,nums.end()); //after reverse order from k to l so we will get next permutation
        }
        return nums;
}

// Time Complexity: O(n)
// Space Complexity: O(1)