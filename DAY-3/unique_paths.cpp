//finding unique paths from starting point to ending point in a grid using dp 

#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
	 vector<vector<int>>path(m,vector<int>(n));
        for(int rows=0;rows<m;rows++)
        {
            path[rows][n-1]=1;  //make last row and last column as 1
        }
        for(int col=0;col<n;col++)
        {
            path[m-1][col]=1;   //make last row and last column as 1
        }
        for(int r=m-2;r>=0;r--)
        {
            for(int c=n-2;c>=0;c--)
            {
                path[r][c]=path[r][c+1]+path[r+1][c];  //add the right and bottom element to get the unique paths
            }
        }
        return path[0][0]; //return the first element by adding values from right and bottom that is number of unique paths
}

//time complexity O(m*n)
//space complexity O(m*n)