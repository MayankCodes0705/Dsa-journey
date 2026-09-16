// ======================================
// LeetCode Problem: maximum nesting depth of the parentheses
// Language: cpp
// Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
// Synced by: LinkCode
// Date: 9/17/2026, 1:09:46 AM
// ======================================


class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        int depth = 0;
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(s[i]=='(') depth++;
            if(s[i]==')')depth--;
            ans = max(ans,depth);
        }
        return ans;
    }
};