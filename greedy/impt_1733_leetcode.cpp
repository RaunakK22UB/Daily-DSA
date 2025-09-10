class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
            unordered_set<int>sadUsers;

            for(auto &friends : friendships){
                int u = friends[0] - 1;
                 // - 1 to make them 0 indexed form becuse langauges are like that only
                int v = friends[1] - 1;

    unordered_set<int>langSet(begin(languages[u]),end(languages[u]));
    // this is storing the language known by user u
    bool canTalk = false;
      for(auto lang : languages[v]){
            if(langSet.count(lang)){// agar v ka lang mil gaya u me
                  canTalk = true;
                  break; // kyu ke age jane ki zarurrat nahi vo baat kar sakte hai
            } 
      }
         if(!canTalk){
             sadUsers.insert(u);
             sadUsers.insert(v);// this 2 users are sad cant talk
         }
            }

            
    // find the max known language
    vector<int>languageOfSadUsers(n+1,0);
    int mostKnowenLang =0;
    for(auto user :sadUsers ){
        for(int lang : languages[user]){
              languageOfSadUsers[lang]++;
        mostKnowenLang = max(mostKnowenLang , languageOfSadUsers[lang]);

        }
    }

    return  sadUsers.size() - mostKnowenLang;   
    // kyu ye logic man lo 3 hindi bolte hai aur 1 english bolta hai to total 4 log hai aur jada 3 hindi bolte hai 4 - 3  = 1 mtlab 1 ko sikhana hai 
    } 


};