class Solution {
public:
    bool isVowel(char s1){
        if(s1=='a'||s1=='e'||s1=='i'||s1=='o'||s1=='u'||s1=='A'||s1=='E'||s1=='I'||s1=='O'||s1=='U'){
        return true;
    }
 
    return false;
 }
    string reverseVowels(string s) {
        int n = s.length();
          int i =0;
          int j=n-1;
          while(i<j){
            if(isVowel(s[i]) && isVowel(s[j]) ){
                 swap(s[i],s[j]);
                 i++;
                 j--;
            }
            else if(!isVowel(s[j])){
                j--;
            }
            else if(!isVowel(s[i])){
                i++;
            }
            
          }

          return s;
    }

};