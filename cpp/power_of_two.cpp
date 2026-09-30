// ======================================
// LeetCode Problem: power of two
// Language: cpp
// Link: https://leetcode.com/problems/power-of-two/
// Synced by: LinkCode
// Date: 10/1/2026, 12:27:47 AM
// ======================================


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if( n > 0 && (n & (n - 1)) == 0) return true;
        return false;
        
    }
};