class Solution {
public:
    int solve( string word,vector<int>index ){
             for(auto ch : word){
                if(index[ch -'a'] == 0){
                    return 0;
                }
                index[ch-'a']--;
             }
             return word.length();
             
    }
    int countCharacters(vector<string>& words, string chars) {
          int n = words.size();
          int ans =0;
          vector<int>index(26,0);
          for( auto ch : chars){
               index[ch-'a']++;
          }
          for(auto ch : words){
        
               ans += solve(ch,index);
 
          }

          return ans;
    }
};