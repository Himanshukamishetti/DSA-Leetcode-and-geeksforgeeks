class MinStack {
public:
stack<long long int> s;
long long int MinVal;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push(val);
            MinVal = val;
        }else{
            if(val < MinVal){
                s.push((long long) 2*val - MinVal);
                MinVal = val;
            }
            else{
                s.push(val);
            }
        }
    }
    
    void pop() {
        if(s.top()<MinVal){
            MinVal = 2*MinVal - s.top();
        }
        s.pop();
    }
    
    int top() {
        if(s.top()<MinVal){
            return MinVal;
        }
        return s.top();
    }
    
    int getMin() {
        return MinVal;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */