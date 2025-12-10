class Solution {
public:
    long long countSubstrings(string s, char c) {
          int n = s.length();
          long long count =0;
          long long prev =0 ;
          for (int i=0 ;i<n;i++){
                    if(s[i] == c){
                        count += prev;
                        count++;
                        prev++;
                    } 
          }
          return count;
    }
};