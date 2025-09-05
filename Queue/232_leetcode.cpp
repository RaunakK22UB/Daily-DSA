class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int>input;
    stack<int>output;
    int peekelement=-1;
    
    void push(int x) {
       if(input.empty()){
            peekelement=x;
       }
         input.push(x);
    }
    
    int pop() {
        if(output.empty()){
            while(!input.empty()){
                  output.push(input.top());
                  input.pop();
            }
        }
        int val  = output.top();
        output.pop();
        return val;
    }
    
    int peek() {
         if(output.empty()){
            return peekelement;
         }
         return output.top();
    }
    
    bool empty() {
        if(output.empty() && input.empty()){
            return true;
    
        }
        return false;
    }
};
