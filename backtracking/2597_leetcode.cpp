class Solution {
public:
     int result =0;
    void solve(vector<int>& nums, int idx ,int k ,unordered_map<int,int>&mp){

        // base case
        if( idx >= nums.size()){
             // increase the result when ever we reach extreme we found the subset
             result++;
             return ;
        }

        // skip 
        solve(nums,idx+1,k,mp);

        
        // --------------cond^n of taking of that elemnt that we have to see that 
        // if (nums[idx] - k) or (nums[idx] + k) element is there in map or not , meam we can not take it 

        // take 
        if(!mp[nums[idx] + k] && !mp[nums[idx] - k]) {// if this resulatanted of this formula is not present

               // add that element in map
               mp[nums[idx]]++; //--------------------Do
               solve(nums, idx+1, k , mp); //-----------------explore
               mp[nums[idx]]--;//---------------------------------------undo  
        }
    }
    int beautifulSubsets(vector<int>& nums, int k) {

   