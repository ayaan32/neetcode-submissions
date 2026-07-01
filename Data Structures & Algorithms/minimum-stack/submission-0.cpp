class MinStack {
private:    
    stack<int> stk;
    stack<int> minstk;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        if(minstk.empty()) {
            minstk.push(val);
        } else {
            minstk.push(min(val,minstk.top()));
        }
    }
    
    void pop() {
        stk.pop();
        minstk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minstk.top();
    }
};