// ======================================
// LeetCode Problem: implement stack using queues
// Language: cpp
// Link: https://leetcode.com/problems/implement-stack-using-queues/
// Synced by: LinkCode
// Date: 10/18/2026, 8:14:51 PM
// ======================================


class MyStack {
    queue<int>q;
    int size = 0;
public:
    MyStack() {}
    
    void push(int x) {
        q.push(x);
        size = size + 1;
        for(int i = 1; i<size;i++){
            q.push(q.front());
            q.pop();
        }

    }
    
    int pop() {
        if(size == 0) return -1;
        int del = q.front();
        q.pop();
        size--;
        return del;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        if(q.empty()) return true;
        else return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */