// ======================================
// LeetCode Problem: power of four
// Language: cpp
// Link: https://leetcode.com/problems/power-of-four/
// Synced by: LinkCode
// Date: 10/28/2026, 8:25:38 PM
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