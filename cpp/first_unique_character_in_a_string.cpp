// ======================================
// LeetCode Problem: first unique character in a string
// Language: cpp
// Link: https://leetcode.com/problems/first-unique-character-in-a-string/
// Synced by: LinkCode
// Date: 9/22/2026, 11:23:39 PM
// ======================================


class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;

        for(char c : s)
            mp[c]++;

        for(int i = 0; i < s.size(); i++) {
            if(mp[s[i]] == 1)
                return i;
        }

        return -1;
    }
};