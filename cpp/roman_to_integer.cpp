// ======================================
// LeetCode Problem: roman to integer
// Language: cpp
// Link: https://leetcode.com/problems/roman-to-integer/
// Synced by: LinkCode
// Date: 9/18/2026, 10:54:22 PM
// ======================================


class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp;

        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int ans = 0;

        for(int i = 0; i < s.length(); i++) {
            if(i + 1 < s.length() && mp[s[i]] < mp[s[i + 1]]) {
                ans -= mp[s[i]];
            }
            else {
                ans += mp[s[i]];
            }
        }

        return ans;
    }
};