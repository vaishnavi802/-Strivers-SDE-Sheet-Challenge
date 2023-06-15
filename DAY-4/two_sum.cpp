//finding the index of two numbers in an array whose sum is equal to the target value
//first we will declare map and then we will iterate through the array and check if the difference of target and current element is present in the map or not
//if it is present then we will return the index of the current element and the index of the difference element
//else we will insert the current element in the map
//if no such pair is found then we will return an empty vector

#include<bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (map.find(diff) != map.end()) {
                return { map[diff], i };
            }
            map[nums[i]] = i;
        }
        return {}; 
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)