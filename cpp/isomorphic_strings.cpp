// ======================================
// LeetCode Problem: isomorphic strings
// Language: cpp
// Link: https://leetcode.com/problems/isomorphic-strings/
// Synced by: LinkCode
// Date: 9/14/2026, 11:30:44 PM
// ======================================


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        for(int i = 0; i < s.size(); i++) {
            for(int j = i + 1; j < s.size(); j++) {
                if((s[i] == s[j]) != (t[i] == t[j]))
                    return false;
            }
        }

        return true;
    }
};