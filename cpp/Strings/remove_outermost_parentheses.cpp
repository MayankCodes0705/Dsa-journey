// ======================================
// LeetCode Problem: remove outermost parentheses
// Language: cpp
// Link: https://leetcode.com/problems/remove-outermost-parentheses/
// Synced by: LinkCode
// Date: 9/7/2026, 12:03:18 AM
// ======================================


class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int count = 0;

        for (char ch : s) {
            if (ch == '(') {
                if (count > 0)
                    ans += ch;
                count++;
            }
            else {
                count--;
                if (count > 0)
                    ans += ch;
            }
        }

        return ans;
    }
};