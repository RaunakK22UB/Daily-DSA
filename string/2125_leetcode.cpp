class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prevCount =0;
        int result =0;
        for(int i=0 ; i<bank.size();i++){
                    int currentCount =0;
                for( auto it : bank[i]){
                     if(it == '1'){
                          currentCount++;
                     }
                }
               result +=(currentCount * prevCount);

               if(currentCount !=0){
                  prevCount = currentCount ;
               }

        }

        return result ;
    }
};