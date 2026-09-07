// ======================================
// LeetCode Problem: reverse words in a string
// Language: cpp
// Link: https://leetcode.com/problems/reverse-words-in-a-string/
// Synced by: LinkCode
// Date: 9/8/2026, 12:10:09 AM
// ======================================


class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> words;
        string word;

        while (ss >> word) {
            words.push_back(word);
        }

        reverse(words.begin(), words.end());

        string ans;
        for (int i = 0; i < words.size(); i++) {
            if (i > 0) ans += " ";
            ans += words[i];
        }

        return ans;
    }
};