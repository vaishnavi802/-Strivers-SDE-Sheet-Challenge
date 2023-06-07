//find count of inversions where previous index is greater than next index

#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                cnt++;
            }
        }
    }
    return cnt;
}

//time complexity O(n^2)
//space complexity O(1)