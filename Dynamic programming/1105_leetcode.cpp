class Solution {
public:
   int OriginalShelfWidth;
   int solve(vector<vector<int>>& books, int idx,int remainingWedith,int maxHeight,vector<vector<int>>dp){
           
           // Base Cond^n
           int n =books.size();
           if(idx >=n){
              return maxHeight;
           }
           if(dp[idx][remainingWedith] !=-1){
              return dp[idx][remainingWedith];
           }


           int bookW = books[idx][0];
           int bookH = books[idx][1];
           int keep =INT_MAX;
           int skip =INT_MAX;

           //keeep
           if(bookW <= remainingWedith){
               keep = solve(books,idx+1,remainingWedith-bookW,max(maxHeight,bookH),dp);
           }

           //skip

           skip = maxHeight + solve(books,idx+1,OriginalShelfWidth-bookW,bookH,dp);


           return dp[idx][remainingWedith] = min(keep,skip);



   }
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        OriginalShelfWidth = shelfWidth;
        int n =books.size();
        vector<vector<int>>dp(1001,vector<int>(1001,-1));
        return solve(books,0,shelfWidth,0,dp);
    }
};