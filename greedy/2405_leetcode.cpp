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
                      
                }
                 last[ch - 'a']=i;  // for each char we have to update the vector that's why outside the if cond^n
          }

          return count + 1;  // why count + 1 try to dry run the example 1   "abacaba" ab ac ab a  when i will be at last a index 6 we will check for this condition last[ch - 'a'] >= start but count will be for this ab substring  , i will be move ahead and out of bound thats why for that substaring we are adding 1
    }
};