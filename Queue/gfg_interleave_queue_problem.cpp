class Solution {
  public:
    queue<int> rearrangeQueue(queue<int> q) {
        // code here
        queue<int>Nq;
        
        int n=q.size()/2;
        for(int i=1;i<=n;i++){
            int val = q.front();
            q.pop();
            Nq.push(val);
        }
        
        while(!Nq.empty()){
            int val = Nq.front();
            Nq.pop();
            q.push(val);
            val=q.front();
            q.pop();
            q.push(val);
        }
        return q;
    }
};