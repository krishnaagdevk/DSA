class MinStack {
public:
    std::stack<std::pair<int, int>> st;

    MinStack() {
        // Constructor initializes an empty stack object
    }
    
    void push(int val) {
        if (st.empty()) {
            st.push({val, val});
        } else {
            // Compare current value with the minimum at the previous top
            int current_min = std::min(val, st.top().second);
            st.push({val, current_min});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */