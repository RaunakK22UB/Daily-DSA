class StockSpanner {
public:
    stack<pair<int,int>>st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span =1;
        while(!st.empty() && st.top().first <= price){
             span += st.top().second;
             st.pop();
        }
        // if it is smaller then just push it into the stack
         st.push({price,span});
         return span;
    }
};