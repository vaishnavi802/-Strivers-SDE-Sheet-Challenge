//finding median of two sorted arrays 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            res.push_back(nums1[i]);
        }
         for(int i=0;i<m;i++)
        {
            res.push_back(nums2[i]);
        }
        sort(res.begin(),res.end());
        if(res.size()%2==1){
            return res[res.size()/2];
        }
        else {
            double temp = res[res.size()/2 -1];
            double temp1 = res[res.size()/2];
            return (temp+temp1)/2;
        }
        return 0;
    }
};

// Time Complexity: O(nlogn)
// Space Complexity: O(n)

//optimised solution

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n=nums2.size(),total_size = m+n;

        while(nums1.size()<total_size){  //Extending the size of nums1
            nums1.push_back(0);
        }

        //merging both the array in sorted form into nums1
        int i=m-1,j=n-1,k=(n+m)-1;
        while(i>=0 && j>=0){
            if(nums1[i]<nums2[j]){
                nums1[k--]=nums2[j--];
            }
            else {
                nums1[k--]=nums1[i--];
            }
        }
        while(j>=0){
            nums1[k--]=nums2[j--];
        }
        // for(int it: nums1)cout<<it<<" ";

        if(nums1.size()%2==1){
            return nums1[nums1.size()/2];
        }
        else {
            double temp = nums1[nums1.size()/2 -1];
            double temp1 = nums1[nums1.size()/2];

            return (temp+temp1)/2;
        }
        return 0;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)