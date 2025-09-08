class Solution {
public:
    int n;
    int result = INT_MAX;
    void solve(vector<int>& cookies,vector<int>&children, int k, int idx){
          //base case
          if(idx >= n){
               int  unfairness = *max_element(begin(children),end(children));
               result = min(result,unfairness);
               return;
          }

          
           int cookie = cookies[idx];
          //for each children we can give him or not means children k numbers of branches means use for loop
          for(int i=0;i<k;i++){
              children[i] += cookie;   // we have given this cookie to this kid
              solve(cookies,children,k,idx+1); // we checked for this cookies lets move idx+1
              children[i] -= cookie;  // backtracking ..remove this cookie from this kid and check for other

          }
    }
    
