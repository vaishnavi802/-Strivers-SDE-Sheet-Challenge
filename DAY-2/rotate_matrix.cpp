//rotate matrix by 90 degree
class Solution {
    public void rotate(int[][] matrix) {
        for(int i=0;i<matrix.length;i++)
        {
            for(int j=0;j<i;j++)   //swapping lower indices with higher means take transpose of matrix
            {
                int temp=0;
                temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;                
            }
        }
        for(int i=0;i<matrix.length;i++)  //swap last row with first row means reverse the row 
        {
            for(int j=0;j<matrix.length/2;j++)
            {
                int temp=0;
                temp=matrix[i][j];
                matrix[i][j]=matrix[i][matrix.length-1-j];
                matrix[i][matrix.length-1-j]=temp;                
            }
        }
        
    }
};