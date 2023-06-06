//kaden's algorithm

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
     long long Sum=0;
     long long maxSum = INT_MIN; 
     for(int i=0; i<n; i++){
        Sum+=arr[i];
        if(Sum < 0){
            Sum=0;
    }
    maxSum=max(maxSum, Sum);
    }
    return maxSum;
}

//time complexity:O(n)
//space complexity:O(1)