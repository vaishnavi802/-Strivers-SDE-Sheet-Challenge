//finding kth element in two sorted arrays


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthElement(int nums1[], int nums2[], int n, int m, int k)
    {
        int total_size = m+n;

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

        return nums1[k-1];
    }

};

// Time Complexity: O(n+m)
// Space Complexity: O(1)

// Driver Code

class Solution {
public:
    int kthElement(int nums1[], int nums2[], int n, int m, int target)
    {
         vector<int> v;    
         for(int i=0; i<row1.size(); i++)
         {  
                   v.push_back(row1[i]);    
         }        
         for(int i=0; i<row2.size(); i++)
         {        
                    v.push_back(row2[i]);   
         }    
         sort(v.begin(), v.end());    
         return v[target-1]; 
    }
};

// Time Complexity: O(nlogn)
// Space Complexity: O(n)
