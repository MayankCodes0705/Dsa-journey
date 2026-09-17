// ======================================
// LeetCode Problem: reverse string
// Language: cpp
// Link: https://leetcode.com/problems/reverse-string/
// Synced by: LinkCode
// Date: 9/11/2026, 11:35:50 PM
// ======================================


class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> temp;

        for(int i = s.size() - 1; i >= 0; i--) {
            temp.push_back(s[i]);
        }

        s = temp;
    }
};