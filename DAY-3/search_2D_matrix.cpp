//search a target in 2D matrix
#include <bits/stdc++.h>
bool searchMatrix(vector<vector<int>>& matrix, int target) {
         if(matrix.size()==0) return false;
        int n =matrix.size();
        int m =matrix[0].size();
        int l = 0;   //numbering from 0 to n*m-1
        int h = (n*m-1);

        while(l<=h) //apply binary search on each row
        {
            int mid = l+(h-l/2);
            if(matrix[mid/m][mid%m]==target) return true;
            else if(matrix[mid/m][mid%m]<target) l=mid+1; //finding target index using formula mid/m gives row index and mid%m gives column index
            else h=mid-1;
        }
        return false;
}

//time complexity O(log(n*m))
//space complexity O(1)