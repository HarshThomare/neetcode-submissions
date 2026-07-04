class MinStack {
    stack<long> stk{};
    long minVal;
public:
    MinStack() {
    }
    
    void push(int val) {
        if (stk.empty()) {
            minVal = val;
            stk.push(0); // 0 offset
        }
        else {
            stk.push(val-minVal);
            if (val < minVal) minVal = val;
        }
    }
    
    void pop() {
        if (stk.empty()) return;
        long pop = stk.top();
        stk.pop();
        if (pop < 0) minVal = minVal - pop; // offset new min to keep 
    }
    
    int top() {
        long top = stk.top();
        return (top > 0) ? (top+minVal) : static_cast<int>(minVal);
    }
    
    int getMin() {
        return static_cast<int>(minVal);
    }
};
