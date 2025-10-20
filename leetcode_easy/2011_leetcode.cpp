class Solution {
public:
    int finalValueAfterOperations(vector<string>& oop) {
                 int  x =0;
                 for(auto it : oop){
                     if(it == "++X" || it == "X++"){
                            x+=1;
                     }else{
                          x--;
                     }
                 }

                return x;
    }
};