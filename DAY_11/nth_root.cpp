//finding nth root of given number

#include<bits/stdc++.h>
using namespace std;



int NthRoot(int n, int m) {
  // Write your code here.
  // for(int i=0;pow(i,n)<=m;i++)
  // {
  //   if(pow(i,n)==m)
  //   {
  //     return i;
  //   }
  // }
  // return -1;

  int low=1;
  long long int high=m;
  while(low<=high)
  {
    long long int mid=low+(high-low)/2;
    if(pow(mid,n)==m) return mid;
    else if(pow(mid,n)>m) high=mid-1;
    else low=mid+1;
  }
  return -1;
  
}

// Time Complexity: O(log(m))
// Space Complexity: O(1)