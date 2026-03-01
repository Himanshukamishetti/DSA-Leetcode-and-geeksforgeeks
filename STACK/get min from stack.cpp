class SpecialStack {
    stack <long long> s;
    long long  minval;
  public:
    SpecialStack() {
        // Define Stack
        minval = -1;
    }

    void push(int x) {
        // Add an element to the top of Stack
        if(s.empty()){
            s.push(x);
            minval = x;
        }else{
            if(x<minval){
                s.push((long long)2*x-minval);
                minval = x;
            }else{
                s.push(x);
            }
        }
    }

    void pop() {
        // Remove the top element from the Stack
        if(s.empty()) return;
        if(s.top()<minval){
            minval = 2*minval-s.top();
        }
        s.pop();
    }

    int peek() {
        // Returns top element of the Stack
        if(s.empty()) return -1;
        if(s.top()<minval){
            return minval;
        }
        return s.top();
    }

    bool isEmpty() {
        // Check if stack is empty
        return s.empty();
    
    }

    int getMin() {
        // Finds minimum element of Stack
        if(s.empty()) return -1;
        return minval;
    }
};