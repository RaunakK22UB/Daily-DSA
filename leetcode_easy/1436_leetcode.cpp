class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
            unordered_map<string , int>mp;

            for(auto it : paths){
                string source = it[0];

                mp[source] = 1;
            }

            for(auto it : paths){
                string destination = it[1];

                if(mp[destination] != 1){
                      return destination;
                }
            }

            return "";
    }
};