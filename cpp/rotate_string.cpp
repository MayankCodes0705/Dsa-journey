// ======================================
// LeetCode Problem: rotate string
// Language: cpp
// Link: https://leetcode.com/problems/rotate-string/
// Synced by: LinkCode
// Date: 9/16/2026, 1:28:22 AM
// ======================================


class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length())
            return false;

        string temp = s + s;

        return temp.find(goal) != string::npos;
    }
};