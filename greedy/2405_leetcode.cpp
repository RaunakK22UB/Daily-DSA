class Solution {
public:
    int partitionString(string s) {
          int n = s.length();

          vector<int>last(26,-1);
          int start =0;
          int count =0;


          for(int i =0;i<n ;i++){
               char ch = s[i];
                if(last[ch - 'a'] >= start){
                       count++;
                       start = i;
     