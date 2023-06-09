//find element that occurs more than n/3 times in an array 

#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &nums)
{
    // Write your code here.
    unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto x:mp)
        {
            if(x.second>nums.size()/3)
            {
                ans.push_back(x.first);
            }
        }
        return ans;

}

//time complexity O(n)
//space complexity O(n)