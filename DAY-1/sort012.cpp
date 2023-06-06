//sort 0's, 1's and 2's in an array

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            c0++;
        }
        else if(arr[i]==1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    int i=0;
    while(c0>0)
    {
        arr[i]=0;
        i++;
        c0--;
    }
    while(c1>0)
    {
        arr[i]=1;
        i++;
        c1--;
    }
    while(c2>0)
    {
        arr[i]=2;
        i++;
        c2--;
    }
}

//time complexity:O(n)
//space complexity:O(1)