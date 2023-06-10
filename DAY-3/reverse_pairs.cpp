//finding reverse pairs in an array


// Within the reversePairs method, define a function merge_sort which takes in the starting and ending indices of a subarray 
// and returns the count of reverse pairs within that subarray.
// If the start index is greater than or equal to the end index, return 0 as there are no reverse pairs 
// in a subarray of length 0 or 1.
// Find the middle index of the subarray and recursively call merge_sort on the left and right halves of the subarray. 
// Add the results of these recursive calls to count.
// Initialize two pointers i and j to the start of the left and right halves, respectively. 
// While both pointers are within their respective halves, compare the values at i and j. 
// If the value at i is greater than twice the value at j, then increment count by the number of remaining elements in the left half (from i to mid). 
// Increment j to move to the next element in the right half. Otherwise, increment i to move to the next element in the left half.
// After counting the reverse pairs, merge the left and right halves of the subarray in sorted order.
// Return count after all recursive calls have completed.

#include <bits/stdc++.h>

class Solution {
public:
void merge(vector<int>&arr,int low,int mid,int high,int &cnt){
    int i=low,j=mid+1;
    int r=j;
    int c=0;
    vector<int>v;
     while(i<=mid){
        while(r<=high and arr[i]>(long long)2*arr[r]){
            c++;
            r++;
        }
        cnt+=c;
        
          while(j<=high and arr[j]<=arr[i])v.push_back(arr[j++]);
          v.push_back(arr[i++]);
     }
     while(j<=high)v.push_back(arr[j++]);
     for(int i=low;i<=high;i++)arr[i]=v[i-low];
}

   void mergesort(vector<int>&arr,int low,int high,int &cnt){
       if(low<high){
      int mid=low+(high-low)/2;
      mergesort(arr,low,mid,cnt);
      mergesort(arr,mid+1,high,cnt);
      merge(arr,low,mid,high,cnt);
       }
   }
    int reversePairs(vector<int>& arr) {
      // merge sort -> modified merge function 
    int cnt=0;
    int n=arr.size();
    mergesort(arr,0,n-1,cnt);
    if(n<=1 or cnt==0)return 0;
    return cnt;
        
    }
};