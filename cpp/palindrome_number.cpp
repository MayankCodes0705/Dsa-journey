// ======================================
// LeetCode Problem: palindrome number
// Language: cpp
// Link: https://leetcode.com/problems/palindrome-number/
// Synced by: LinkCode
// Date: 11/28/2026, 6:44:22 PM
// ======================================


class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        int original = x;
        long long rev = 0;

        while (x > 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10;
        }

        return original == rev;
    }
};