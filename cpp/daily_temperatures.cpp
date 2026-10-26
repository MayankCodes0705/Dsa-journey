// ======================================
// LeetCode Problem: daily temperatures
// Language: cpp
// Link: https://leetcode.com/problems/daily-temperatures/
// Synced by: LinkCode
// Date: 10/26/2026, 7:13:22 PM
// ======================================


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        stack<int> st;
        int n = temperatures.size();
        vector<int> result(n);

        
        for(int i = n - 1; i >= 0; i--) {

            while(!st.empty() && temperatures[st.top()] <= temperatures[i]) {
                st.pop();
            }

            if(st.empty()) {
                result[i] = 0;
            }
            else {result[i] = st.top()-i;}

            st.push(i);
        }

        return result;
    }
};