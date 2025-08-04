class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n =1001;
        vector<int>num(n,0);

        for(int it : arr){
            num[it]++;
        }

        for(int it : target){
            num[it]--;
        }

       for(int it : num){
            if( it != 0){
                return false;
                break;
            }
        }

        return true;

        
    }
};