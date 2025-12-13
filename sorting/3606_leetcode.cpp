

class Solution {
public:
  bool isCodeCorrect(string code){
          
           if(code=="") return false;
           for(auto ch: code){ 
                 if(!isalnum(ch) && ch !='_'){
                    return false;
                 }
           
          }
           return true;
  }
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        unordered_map<string ,int>mp={
            {"electronics",0},
            {"grocery",1},
            {"pharmacy",2},
            {"restaurant",3},
        };

        vector<pair<int,string>>pairs;
        for(int i =0;i<code.size();i++){ 
            if( isCodeCorrect(code[i]) && mp.count(businessLine[i]) && isActive[i]){
                          pairs.push_back({mp[businessLine[i]],code[i]});
            }
        }

        sort(begin(pairs),end(pairs));
        vector<string>result;

        for(auto it : pairs){
             result.push_back(it.second);
        }

       

        return result;
    }
};