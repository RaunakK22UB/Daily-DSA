class Solution {
public:
// good question , must try !!!!!1
    bool isPathCrossing(string path) {
           unordered_set<string>st;
           st.insert("0,0");
           int y=0;
           int x=0;
           for(int i=0;i<path.size();i++){
                   if(path[i]=='N'){
                        y++;
                   }else if(path[i]=='S'){
                       y--;
                   }else if(path[i]=='W'){
                       x--;
                   }else{  // going to east 
                       x++;
                   }
                   string key = to_string(x)+","+to_string(y);
                   if(st.count(key)){
                         return true;
                   }

                   st.insert(key);
           }
          
          return false;
    }
};