class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
           int n = intervals.size();
           sort(begin(intervals), end(intervals));
           vector<vector<int>>result;
           result.push_back(intervals[0]);

           for(int i =1;i<n;i++){ 
                if(intervals[i][0] < result.back()[1]){  // if smaller then we can merge them.
                        result.back()[0] = min(result.back()[0], intervals[i][0]);
                        result.back()[1] = max(result.back()[1],intervals[i][1]);

                        // This is the condition to save the intervals in the result 
                        //1st should be min , and 2nd should max between them 
                }else{
                    // if they are separate intervals just push them in the result
                    result.push_back(intervals[i]);
                }
           }

           return result;

    }
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
              vector<vector<int>>X;
           vector<vector<int>>Y;
           for(auto &it : rectangles){
              int x1 = it[0];
              int x2 = it[2];
              int y1 = it[1];
              int y2 = it[3];
              X.push_back({x1,x2});
              Y.push_back({y1,y2});
           }

           vector<vector<int>>result1= merge(X);
           vector<vector<int>>result2 = merge(Y);

           return result1.size()>= 3 || result2.size()>=3;

    }
};