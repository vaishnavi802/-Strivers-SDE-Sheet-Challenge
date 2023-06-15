//finding multiple pairs having sum equal to target value in an array
//first we will declare a vector of vector and iterate through the array
//then we will iterate through the array from the next element of the current element
//if the sum of the current element and the next element is equal to the target value then we will push the pair in the vector of vector
//we will declare vector temp for storing the pair and push the pair in the vector of vector
//then we will sort the vector of vector and return it
//if no such pair is found then we will return an empty vector

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>>res;
   for(int i=0;i<arr.size();i++)
   {
      for(int j=i+1;j<arr.size();j++)
      {
         if(arr[i]+arr[j]==s)
         {
            vector<int>temp;
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));
            res.push_back(temp);
         }
      }
   }
   sort(res.begin(),res.end());
   return res;
}

// Time Complexity: O(n^2)
// Space Complexity: O(n)