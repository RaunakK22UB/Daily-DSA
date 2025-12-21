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