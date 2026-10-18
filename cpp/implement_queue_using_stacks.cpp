// ======================================
// LeetCode Problem: implement queue using stacks
// Language: cpp
// Link: https://leetcode.com/problems/implement-queue-using-stacks/
// Synced by: LinkCode
// Date: 10/18/2026, 8:41:48 PM
// ======================================


class MyQueue {
    stack<int>st1;
    stack<int>st2;
    int size = 0;
public:
    MyQueue() {}
    
    void push(int x) {
        while(st1.size()){
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        size++;
        while(st2.size()){
            st1.push(st2.top());
            st2.pop();
        }
    }
    
    int pop() {
        int del = st1.top();
        st1.pop();
        size--;
        return del;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        return st1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */