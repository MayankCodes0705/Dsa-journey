// ======================================
// LeetCode Problem: valid palindrome
// Language: cpp
// Link: https://leetcode.com/problems/valid-palindrome/
// Synced by: LinkCode
// Date: 9/9/2026, 10:51:39 PM
// ======================================


class Solution {
public:
    bool isPalindrome(string s) {
        string clean;

        for(char c : s) {
            if(isalnum(c))
                clean += tolower(c);
        }

        string rev = clean;
        reverse(rev.begin(), rev.end());

        return clean == rev;
    }
};