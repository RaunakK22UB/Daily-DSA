class Solution {
  public:
    bool zero(vector<int>v){
         for(auto it:v){
            if(it !=0){
                return false;
            }
         }

         return true;
    }
    int search(string &pat, string &txt) {
        int i =0,j=0;
        int count =0;
        int k = pat.length();
        int n = txt.length();

        vector<int>v(26,0);

        for(auto &it : txt){
            v[it-'a']++;
        }

        while(j<n){
               v[txt[j]-'a']--;
               if(j-i+1 = k){
                   if(zero(v)){
                      count++;
                   }
                   v[txt[i]-'a']++;
                   i++;
                   j++;

               }
               j++;
        }

        return count;
        
    }
};