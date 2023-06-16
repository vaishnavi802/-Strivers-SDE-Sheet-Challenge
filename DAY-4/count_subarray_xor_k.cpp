//counting number of subarray with given xor k
//declare a map for storing xor sum and its frequency
//declare a variable xor_sum and initialize it with 0
//traverse the array and calculate xor_sum
//if xor_sum==k then increment the count
//if xor_sum^k is present in the map then increment the count by the frequency of xor_sum^k
//insert the xor_sum in the map
//return the count

#include <bits/stdc++.h>
using namespace std;

int count_subarray_xor_k(vector<int> &arr, int k)
{
    int count = 0;
    int xor_sum = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        xor_sum = xor_sum ^ arr[i];
        if (xor_sum == k)
        {
            count++;
        }
        if (mp.find(xor_sum ^ k) != mp.end())
        {
            count += mp[xor_sum ^ k];
        }
        mp[xor_sum]++;
    }
    return count;
}


// Time Complexity: O(n)
// Space Complexity: O(n)