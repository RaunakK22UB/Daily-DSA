class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        int n = arr.size();
        deque<int>dq;
        vector<int>ans;
        
        // first window k size check
        
        for(int i=0;i<k;i++){
            if(arr[i]<0){
                dq.push_back(i);
            }
        }
        
        if(dq.size()>0){
            ans.push_back(arr[dq.front()]);
        }else{
            ans.push_back(0);
        }
        
        // now other elements check from kth index
        
        for(int i=k;i<n;i++){
            // removal of the element in queue which is not inthe window k size
            
            if(!dq.empty() && i - dq.front()  >= k){
                  dq.pop_front();
            }
            
            // push in dqeque
            if(arr[i]<0){
                dq.push_back(i);
            }
            
            
            /// push inside the ans
            if(dq.size()>0){
            ans.push_back(arr[dq.front()]);
        }else{
            ans.push_back(0);
        }
            
            
        }
        
        
        return ans;
        
    }
};