class MinStack {
private:
    stack<int> s1;
    stack<int> minstack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s1.push(val);
        if(minstack.empty()||val<=minstack.top()){
            minstack.push(val);
        }
    }
    
    void pop() {
        if(s1.top()==minstack.top()){
            minstack.pop();
        }
        s1.pop();
    }
    
    int top() {
        int val=s1.top();
        return val;
    }
    
    int getMin() {
      return minstack.top();
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
