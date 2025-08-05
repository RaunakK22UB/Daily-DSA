class Solution {
public:
    string largestGoodInteger(string num) {
            char maxi =' ';
            int n = num.length();
            if( n < 3){
                return "";
            }

            for(int i=2 ; i <n;i++){
                if(num[i] == num[i-1] && num[i-1]==num[i-2]){
                      maxi=max(maxi,num[i]);
                }
            }
            if(maxi==' '){
                return "";
            }
            return string(3,maxi);

    }
};