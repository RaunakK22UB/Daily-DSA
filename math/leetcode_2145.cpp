class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
            int minVal=0;
            int maxVal=0;
            int curr=0;

            for( int &d : differences){
                curr= curr+d;
                minVal=min(minVal,curr);
                maxVal=max(maxVal,curr);
                if(((upper-maxVal)-(lower-minVal)+1) <=0){
                    return 0;
                }
            }
            return ((upper-maxVal)-(lower-minVal)+1);
    }
};