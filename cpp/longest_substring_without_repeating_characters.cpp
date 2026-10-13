// ======================================
// LeetCode Problem: longest substring without repeating characters
// Language: cpp
// Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
// Synced by: LinkCode
// Date: 10/13/2026, 11:31:23 PM
// ======================================


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;

        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.length(); right++) {

            if (mp.find(s[right]) != mp.end()) {
                left = max(left, mp[s[right]] + 1);
            }

            mp[s[right]] = right;

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};