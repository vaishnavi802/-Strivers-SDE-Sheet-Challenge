//finding majority element in an array

#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int cnt=1;
	int maxi=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]==maxi)
		{
			cnt+=1;
		}
		else
		{
			cnt-=1;
			if(cnt==0)
			{
				maxi=arr[i];
				cnt=1;
			}
		}
	}
	cnt=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==maxi)
			cnt++;
	}
	if(cnt>n/2)
	{
		return maxi;
	}
	return -1;
}

//time complexity O(n)
//space complexity O(1)