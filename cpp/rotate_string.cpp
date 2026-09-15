// ======================================
// LeetCode Problem: rotate string
// Language: cpp
// Link: https://leetcode.com/problems/rotate-string/
// Synced by: LinkCode
// Date: 9/16/2026, 1:06:38 AM
// ======================================


class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        int m = goal.length();
        if(n!=m) return false;
        for(int i =0; i<n;i++){
            if(s==goal){
                return true;
            }
            char ch = s[0];
            s.erase(0,1);
            s += ch;
        }

        return false;
    }
};