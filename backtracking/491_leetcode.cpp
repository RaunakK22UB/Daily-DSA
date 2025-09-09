class Solution {
public:
    int n ;
    void solve(vector<int>& nums,vector<vector<int>>&result,vector<int>&curr, int idx){

        if(curr.size()>=2){
            result.push_back(curr);
        }

        unordered_set<int>st;

        for(int i =idx;i<n;i++){

            // check can we take this nums[i] , ya to curr empty hai to ya bada ya equal hai to le sakte hai
            // and set ke andar me ye element nahi hona chaiye warna duplicacy
            if( (curr.empty() || nums[i]>=curr.back()) && (st.find(nums[i]) == st.end())){
                 
                           curr.push_back(nums[i]);
                           // we have taken this element so put  in set
                           // now call for idx+1
                           solve(nums,result,curr,idx+1);
                           curr.pop_back();       // this will work as our exlude , just exlude this and for i++ means for next idx+1 same
                            st.insert(nums[i]); 
            }
        }

    }
    class Solution {
public:
    int n ;
    void solve(vector<int>& nums,vector<vector<int>>&result,vector<int>&curr, int idx){

        if(curr.size()>=2){
            result.push_back(curr);
        }

        unordered_set<int>st;

        for(int i =idx;i<n;i++){

            // check can we take this nums[i] , ya to curr empty hai to ya bada ya equal hai to le sakte hai
            // and set ke andar me ye element nahi hona chaiye warna duplicacy
            if( (curr.empty() || nums[i]>=curr.back()) && (st.find(nums[i]) == st.end())){
                 
                           curr.push_back(nums[i]);
                           // we have taken this element so put  in set
                           // now call for idx+1
                           solve(nums,result,curr,idx+1);
                           curr.pop_back();       // this will work as our exlude , just exlude this and for i++ means for next idx+1 same
                            st.insert(nums[i]); 
            }
        }

    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        n = nums.size();
        vector<vector<int>>result;
        vector<int>curr;
        solve(nums,result,curr,0);

        return result;
    }
};