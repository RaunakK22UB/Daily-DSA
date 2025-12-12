class Solution {
public:
    bool isSubset(vector<int>&freq2 , vector<int>&temp){
        for(int i =0 ; i<temp.size();i++){
               if(temp[i] < freq2[i]){
                      return false;
               }
        }

        return true;
    
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
            vector<int>freq2(26,0);
            vector<string>result;
            for(auto& word : words2){
                vector<int>temp(26,0);
                for(auto & ch : word){
                    temp[ch-'a']++;
                    freq2[ch-'a']= max(freq2[ch-'a'],temp[ch-'a']);
                }
                
            }

            for(auto& word : words1){
                    vector<int>temp(26,0);
                    for(auto &ch : word){
                        temp[ch-'a']++;
                    }

                    if(isSubset(freq2,temp)){
                        result.push_back(word);
                    }
            }

            return result;
    }
};