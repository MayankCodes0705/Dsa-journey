// ======================================
// LeetCode Problem: sum of beauty of all substrings
// Language: cpp
// Link: https://leetcode.com/problems/sum-of-beauty-of-all-substrings/
// Synced by: LinkCode
// Date: 9/18/2026, 1:32:13 AM
// ======================================


class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        int beauty = 0;

        for(int i = 0; i < n; i++) {

            unordered_map<char, int> freq;

            for(int j = i; j < n; j++) {

                freq[s[j]]++;

                int max_freq = 0;
                int min_freq = n;

                for(auto p : freq) {
                    max_freq = max(max_freq, p.second);
                    min_freq = min(min_freq, p.second);
                }

                beauty += max_freq - min_freq;
            }
        }

        return beauty;
    }
};