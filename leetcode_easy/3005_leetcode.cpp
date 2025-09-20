class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
           for(auto &it : nums){
              mp[it]++;
           }

           int maxCount=INT_MIN;
           int count=0;
           for(auto &it : mp){
               if(it.second == maxCount){
                      count +=it.second;
               }else if(it.second > maxCount){
                     maxCount = it.second ;
                     count=it.second;
               }
           }

           return count;
    }
};