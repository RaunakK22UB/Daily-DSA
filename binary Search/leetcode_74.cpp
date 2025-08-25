class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // we are actully changing this 2D matrix to 1D with out taking extra 1D matrix
        //How by just useing formulas
        // two formuls 1. For end m*n-1
        //=----------- 2. For mid = matrix[row][col] row=mid/n , col=mid%n;
        // by using this formuls we can easily make this 2D matric to 1D
           int m = matrix.size();
           int n = matrix[0].size();

           int start = 0;
           int end = m*n-1;
           while(start <=end){
             int mid = start +(end - start)/2;
             int row = mid/n;
             int col = mid%n;
             if(matrix[row][col]>target){
                      end= mid -1;
             }else if(matrix[row][col]<target){
                   start = mid+1;
             }else{
                return true;
             }

           }

           return false;
    }
};