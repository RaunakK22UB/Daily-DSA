class Solution {
public:
    int n;
    long long solve(int idx , vector<vector<int>>& q, vector<long long>&dp ){
        // base case
        if( idx >= n){
            return 0;
        }

        if(dp[idx]!=-1){
            return dp[idx];
        }

        long long take = q[idx][0] + solve(idx + q[idx][1] + 1 , q,dp);
          // why this idx + q[idx][1] + 1 , we know up this that we idx + q[idx][1] we have to skip this given in question but why +1, because indexing is simple from 0 thats why add +1
      long long not_take = solve(idx+1,q,dp);

        return dp[idx] = max(take,not_take);
    }
    long long mostPoints(vector<vector<int>>& q) {
            n = q.size();
            vector<long long>dp(n+1,-1);
           return solve(0,q,dp);
    }
};