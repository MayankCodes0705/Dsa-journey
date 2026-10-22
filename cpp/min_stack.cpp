// ======================================
// LeetCode Problem: min stack
// Language: cpp
// Link: https://leetcode.com/problems/min-stack/
// Synced by: LinkCode
// Date: 10/22/2026, 8:09:59 PM
// ======================================


class MinStack {
    stack<pair<int,int>>st;
public:
    MinStack() {}
    
    void push(int value) {
        if(st.empty()){ 
            st.push({value,value});
        }else{
            st.push({value,min(value,st.top().second)});
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