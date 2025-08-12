class Solution {
public:
    string breakPalindrome(string s) {
            int n = s.size();
            // edge case 1 char always be palindrome
            if(n ==1){
                return "";
            }

            for(int i=0;i<n/2;i++){
                if(s[i]!='a'){
                    s[i]='a';
                    return s;
                }
            }
            s[n-1] ='b';
            return s;
    }
};
// see plaindrome can be even or odd lenght ,note if we change the meddile of odd palindrome then also that is plaindrome, mik suggest that we dont need to go all the way for whole length n  just go upto n/2 example:- a a b b a a  ,just go upto [a c] b b c a and change the c to a , because plaindrome means what half will be same of other half , is it works for odd lenght ?? it will like dry run this c c b c c
//but in this case ,lenght example:-  a a b a a , it wont work so , we will come out of loop and just change the last char to b , why 'a' and 'b' i am ussing because we need "lexicographically smallest one possible." so it will be a a b a b that's it 