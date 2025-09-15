class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool>mp(26,false);

        for(auto &it : brokenLetters ){
              mp[it - 'a'] = true;
        }

        bool isSafe = true;  // mtlab kya is work ko le skate hai ?
        int count =0;

        for(int i=0;i<text.length();i++){
               if(text[i]==' '){  // agar space aagaya mtlab ek word dekh liya
                    if(isSafe){
                        count++; // ha iss word ko le sakte hai to inc.the count
                    }
                    isSafe= true;
               }
               else if(mp[text[i]-'a'] == true){
                  isSafe=false;
               }
        }
           
        /// check for lat work 
        if(isSafe){
            count++;
        }

        return count;

    }
};