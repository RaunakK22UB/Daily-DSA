class Solution {
public:
    int solve(vector<vector<int>>& grid,int m,int n,int i,int j,vector<vector<int>>&dp){
            /// base case
            if(i == m-1 && j ==n-1){
                return grid[i][j];
            }
            if(dp[i][j]!=-1){
                return dp[i][j];
            }

            if(i==m-1){      // we are in last row we can not go dwon there so only move right j+1
               return dp[i][j]=grid[i][j] + solve(grid,m,n,i,j+1,dp);
            }
            else if(j == n-1){    // we are in last colmun we can not go right there so only move down i+1
                    return dp[i][j]=grid[i][j] + solve(grid,m,n,i+1,j,dp);
            }else{
                     return dp[i][j]=grid[i][j]+ min(solve(grid,m,n,i,j+1,dp), solve(grid,m,n,i+1,j,dp));   // if not above those cond^n the n go down and right and take only min value
            }

    }
    int minPathSum(vector<vector<int>>& grid) {
         int m = grid.size(); // row 
         int n =grid[0].size(); // clm

         vector<vector<int>>dp(m,vector<int>(n,-1));

         return solve(grid,m,n,0,0,dp);

    }
};