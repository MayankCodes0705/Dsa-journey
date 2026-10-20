// ======================================
// LeetCode Problem: valid parentheses
// Language: cpp
// Link: https://leetcode.com/problems/valid-parentheses/
// Synced by: LinkCode
// Date: 10/20/2026, 8:45:05 PM
// ======================================


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i = 0; i < s.length(); i++) {

            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            }
            else {
                if(st.empty())
                    return false;

                char ch = st.top();
                st.pop();

                if(s[i] == ')' && ch != '(')
                    return false;
                if(s[i] == ']' && ch != '[')
                    return false;
                if(s[i] == '}' && ch != '{')
                    return false;
            }
        }

        return st.empty();
    }
};