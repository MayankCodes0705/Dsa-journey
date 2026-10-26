// ======================================
// LeetCode Problem: online stock span
// Language: cpp
// Link: https://leetcode.com/problems/online-stock-span/
// Synced by: LinkCode
// Date: 10/26/2026, 6:47:45 PM
// ======================================


class StockSpanner {
public:
    stack<pair<int,int>>st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span = 1;
        while(!st.empty() && st.top().first <= price){
            span = span + st.top().second;
            st.pop();
        }
        st.push({price,span});

        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */