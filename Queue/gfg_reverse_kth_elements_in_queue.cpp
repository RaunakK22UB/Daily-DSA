class Solution {
  public:
    queue<int>reverseFirstK(queue<int>q, int k) {
        // code here
        stack<int>st;
        for(int i=0;i<k;i++){
               int element = q.front();
               q.pop();
               st.push(element);
        }
        
        while(!st.empty()){
            int element = st.top();
            st.pop();
            q.push(element);
        }
        
        int n = q.size() - k;
        while(n--){
             int element = q.front();
             q.pop();
             q.push(element);
        }
        
        return q;
    }
};