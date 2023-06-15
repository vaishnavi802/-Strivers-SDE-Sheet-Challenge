//finding largest length of subarray having sum equal to zero
//first we will declare a map and a variable sum and maxlen
//then we will iterate through the array and add the current element to the sum
//if the sum is equal to zero then we will update the maxlen to the current index+1
//else we will check if the sum is present in the map or not since we are doing this for the first time so it will not be present
//as sum is found in the map that is sum is zero
//if it is present then we will update the maxlen to the maximum of the current maxlen and the difference of the current index and the index of the sum in the map
//else we will insert the sum and the index in the map
//at last we will return the maxlen


#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > a) {

  // Write your code here
   unordered_map<int,int>mp;
        int sum=0;
        int maxlen=0;
        for(int i=0;i<a.size();i++)
        {
            sum+=a[i];
            if(sum==0)
            {
                maxlen=i+1;
            }
            else
            {
                if(mp.find(sum)!=mp.end())
                {
                    maxlen=max(maxlen,i-mp[sum]);
                }
                else
                {
                    mp[sum]=i;
                }
            }
        }
        return maxlen;

}

// Time Complexity: O(n)
// Space Complexity: O(n)