//set matrix zero of row and column if any element is zero

#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	 int row = matrix.size();
        int col = matrix[0].size();
        vector <int> Row(row,-1);
        vector<int> Col(col,-1);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    Row[i] = 0;
                    Col[j] = 0;
                }
            }
        }
         for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(Row[i] == 0 || Col[j] == 0 ){
                    matrix[i][j]=0;
                }
            }
        }
}

//time complexity O(n*m)
//space complexity O(n+m)