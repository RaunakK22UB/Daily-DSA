class Solution {
public:
    int countHomogenous(string s) {
           int n = s.length();
            int length=1;
            int sum =0;
            for(int i=1;i<n;i++){
                if(s[i]==s[i-1]){
                    length++;
                }else{
                    length=1;
                }
                sum+=lenght;
            }
              return sum;

    }
};