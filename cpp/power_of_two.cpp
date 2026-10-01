// ======================================
// LeetCode Problem: power of two
// Language: cpp
// Link: https://leetcode.com/problems/power-of-two/
// Synced by: LinkCode
// Date: 10/1/2026, 11:15:12 PM
// ======================================


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if( n > 0 && (n & (n - 1)) == 0) return true;
        return false;
        
    }
};