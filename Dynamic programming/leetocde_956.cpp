class Solution {
public:
    int solve(vector<int>&rods,int idx,int diff,vector<vector<int>>&dp){
          // base case
          if(idx >= rods.size() ){    
               if(diff == 0){
                return 0; 
               }
                return INT_MIN;  
          }
            
            if(dp[idx][diff+5000]!=-1){
                return dp[idx][diff+5000];  // offset technique explained in video codestorywithmik
            }

          int add_to_L1 =rods[idx]+solve(rods,idx+1,diff+rods[idx],dp);
          int add_to_L2 =rods[idx]+solve(rods,idx+1,diff-rods[idx],dp);
          int addNothing =solve(rods,idx+1,diff,dp);

          return dp[idx][diff+5000]=max({add_to_L1,add_to_L2,addNothing});
    }
    int tallestBillboard(vector<int>& rods) {
        int n =rods.size();
        vector<vector<int>>dp(n+1,vector<int>(10003,-1));
          return solve(rods,0,0,dp)/2;  // idx diff
    }
};
//------------------------------------------------------ earlier code


// class Solution {
// public:
//     int solve(vector<int>&rods,int idx ,int l1 ,int l2){
//           // base case
//           if(idx >= rods.size() ){    // what it means it reaches the last element , becuase idx starting with 0 and we are adding + 1 to every time
//                if(l1 == l2){
//                 return l1; // we are returning the max lenght of billiboard why l1 == l2 because both the rods should equall then only billiboard will stand
                
//                }
//                 return INT_MIN;  // if not equal then return min, becuz we are finding max 
//           }

//           int add_to_L1 =solve(rods,idx+1,l1+rods[idx],l2);
//           int add_to_L2 =solve(rods,idx+1,l1,l2+rods[idx]);
//           int addNothing =solve(rods,idx+1,l1,l2);

//           return max({add_to_L1,add_to_L2,addNothing});
//     }
//     int tallestBillboard(vector<int>& rods) {
//           return solve(rods,0,0,0);  // solve(idx,l1,l2)
//     }
// };