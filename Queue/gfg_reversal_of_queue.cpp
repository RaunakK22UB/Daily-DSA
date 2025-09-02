// function Template for C++

class Solution {
  public:
    queue<int> reverseQueue(queue<int> &q) {
        
        
        
        // --------------------by the help of recursion 
//         //base condition 
        
//         if(q.empty()){
//             return q;
//         }
        
//         int element = q.front();
//         q.pop();
//         reverseQueue(q);
//         q.push(element);
//             return q;
//     }
// };

//-----------by the help of stack
        
        stack<int>st;
        while(!q.empty()){
            int element = q.front();
          q.pop();
          st.push(element);
        
