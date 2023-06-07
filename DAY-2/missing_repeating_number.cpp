//given in an array missing and repeating number find them

#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &nums, int n)
{
	// Write your code here 
	pair<int,int>ans;
	int total=(n*(n+1))/2;
	int sum=0;
	sort(nums.begin(),nums.end());
	for(int i=1;i<n;i++)
	{
		if(nums[i-1]==nums[i]) //repeating number
		{
			ans.second=nums[i];
			sum-=nums[i];

		}
		sum+=nums[i];
	}
	sum+=nums[0];
	ans.first=abs(total-sum); //missing number
	return ans;
	
}

//time complexity O(nlogn)
//space complexity O(1)