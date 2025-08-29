class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_map<int,int>mpCount;
              for(auto&it : arr){
                  mp[it]++;
              }
              for(auto &it : mp){
                    mpCount[it.second]++;
              }
              for(auto it : mpCount){
                  if(it.second != 1){
                    return false;
                  }
              }

              return true;
    }
};