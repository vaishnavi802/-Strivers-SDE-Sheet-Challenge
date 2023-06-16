//finding the longest consecutive sequence in an array
//declaring a set and inserting all the elements of the array in the set
//then traversing the array and checking if the previous element is present in the set or not
//if not then we will check for the next element and increment the count
//for previous element found we will skip the loop 
//we will always check count from current and check for next element in the set
//and increment the count
//and finally we will return the maximum count

#include <bits/stdc++.h>

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n=nums.size();
       set<int>s;
       int res=0;
       for(int x:nums)
       {
           s.insert(x);
       }
       for(int i=0;i<n;i++)
       {
           int curr=nums[i];
           int prev=curr-1;
           int cnt=0;
           if(s.find(prev)==s.end())
           {
               while(s.find(curr)!=s.end())
               {
                   curr++;
                   cnt++;
               }
           }
           res=max(res,cnt);
       }
       return res;
    }
};

//time complexity:O(N)
//space complexity:O(N)