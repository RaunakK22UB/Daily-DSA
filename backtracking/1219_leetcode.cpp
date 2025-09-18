class Solution {
public:
    vector<vector<int>>direction{{-1,0},{0,-1},{1,0},{0,1}}; 
    int m , n;
    int solve(vector<vector<int>>& grid, int i ,int j){
          // base case
          if( i<0 || i>=n || j<0 || j>=m || grid[i][j]==0){
                return 0;
          }

          int originalSelectedValue = grid[i][j]; // store this because we are going to make it 0
           
          grid[i][j] = 0;  // make it 0 cant vist again

          int maxGold =0;

          // loop for directions

          for(auto &dir : direction){
                
                int new_i = i + dir[0];
                int new_j = j + dir[1];

                maxGold = max(maxGold , solve(grid , new_i , new_j));
          }


         grid[i][j]= originalSelectedValue;
         return originalSelectedValue + maxGold ;



    }
    int getMaximumGold(vector<vector<int>>& grid) {
           n = grid.size(); // rows
           m = grid[0].size(); // columns
        int maxResult =0;
        for(int i=0;i<n;i++){
          