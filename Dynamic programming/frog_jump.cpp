class Solution {
public:
    bool solve(vector<int>&stones,int n ,int curr_index_stone,int prevJump,vector<vector<int>>&dp,unordered_map<int,int>&mp){
           // base case
           if(curr_index_stone == n-1) {
            // thats mean we reached last stone
            return true;
        }
        if(dp[curr_index_stone][prevJump] !=-1){
            return dp[curr_index_stone][prevJump];
        }

        // we have 3 conditions that frog can jump prevJump -1 , prevJump , prevJump+1 
        // so we can do it writting it separatly conditions each 
        // but we will use for loop 
        // how we are doing with for loop 1st cond^n :-prevJump -1 , we insialaize the nextJump = prevJump - 1
        // 2^nd condtion prevJump , so if nextJump++ then  prevJump - 1 + 1 =  prevJump 
        // 3rd conditon  prevJump + 1,so if nextJump++(which is prevJump now) then  prevJump + 1 =  prevJump + 1
        bool result = false; // we will use this bool to check each condtion by help of || or oprator 
        for( int nextJump = prevJump - 1; nextJump<=prevJump+1; nextJump++){
                           if(nextJump > 0){   //it should greater then 0 because some time like for stone 0 it will come -1
                             int next_stone = stones[curr_index_stone] + nextJump;  // next stone after Next jump
                              // if nextJump we got now we have to check that is this number of stone is there in map
                              if(mp.find(next_stone) != mp.end()){
                                
                                result = result || solve(stones, n,mp[next_stone],nextJump,dp,mp);
                              }
                           }
        }
        return dp[curr_index_stone][prevJump] = result;
    }


    bool canCross(vector<int>& stones) {
        int n = stones.size();
        unordered_map<int,int>mp;
        for(int i =0;i<n;i++){
            mp[stones[i]]=i;
        }
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solve(stones,n,mp[0],0,dp,mp);
        // we are sending stones vector, current_index_of_stone,prevJump,dp
    }
};