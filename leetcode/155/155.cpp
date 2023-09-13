class MinStack {
private:
    vector<array<int, 2>> stack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        int least = val;
        if (stack.size() != 0) least = min(least, stack.back()[1]);
        stack.push_back({val, least});
    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
        return stack.back()[0];
    }
    
    int getMin() {
        return stack.back()[1];
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
