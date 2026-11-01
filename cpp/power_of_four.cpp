// ======================================
// LeetCode Problem: power of four
// Language: cpp
// Link: https://leetcode.com/problems/power-of-four/
// Synced by: LinkCode
// Date: 11/2/2026, 1:41:14 AM
// ======================================


class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0)
            return false;

        while(n % 4 == 0)
            n /= 4;

        return n == 1;
    }
};