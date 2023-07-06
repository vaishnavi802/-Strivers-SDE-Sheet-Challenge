//finding median of 2D matrix

#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    vector<int>res;
    int m=matrix.size();
    int n=matrix[0].size();

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            res.push_back(matrix[i][j]);
        }
    }
    sort(res.begin(),res.end());
    int size=res.size();
    int mid=size/2;
    return res[mid];
}

// Time Complexity: O(m*n*log(m*n))
// Space Complexity: O(m*n)