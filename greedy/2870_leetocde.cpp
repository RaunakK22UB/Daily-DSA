class Solution {
public:
// simple logic hai kisi bhi number ko 3 se devide karo aur uska ceil lelo number of oprations you will get 
// 2/3 = 0.6 ceil = 1 (means 2 devided by 2) example 4 is there 2 times so we can remove them by 2 because frequancy must be 2 or 3 
//4/3 = 1.9 ceil will be 2 (example 5,5,5,5) we can remove them in pair of 2-2 so 2 oprations
// so this is a trick we can use to devide with 3 to get anwsers
    int minOperations(vector<int>& nums) {
         int n = nums.size();
          unordered_map<int,int>mp;
          int ans =0;
         for(auto it : nums){
             mp[it]++;
         }
         for( auto it : mp){
             if(it.second == 1){
                return -1;
             }
             ans+= ceil((double)it.second/3);
         }

         return ans;
         

    }
};


// =------------------------wrong approch
// class Solution {
// public:
//     int minOperations(vector<int>& nums) {
//          int n = nums.size();

//          unordered_map<int,int>mp;
//          for(auto it : nums){
//              mp[it]++;
//          }
//          int count = 1;
//          for(auto it : mp){
//               if(it.second % 2==0 || it.second%3==0){
//                 count++;
//               }else{
//                   return -1;
//               }
//          }

//          return count;



//     }
// };