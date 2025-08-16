class Solution {
public:
    bool winnerOfGame(string c) {
        int n = c.length();
        int alice =0;
        int bob =0;
        for(int i =1 ;i <n-1;i++){
            if(c[i-1] == c[i] && c[i] == c[i+1]){
                   if(c[i]=='A'){
                      alice++;
                   }else{
                       bob++;
                   }
            }
        }

        return alice > bob ; // if alice == bob and alice < bob int n=both condition false will be there see codestorywithmik very easy explanation
    }
};