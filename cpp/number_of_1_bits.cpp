// ======================================
// LeetCode Problem: number of 1 bits
// Language: cpp
// Link: https://leetcode.com/problems/number-of-1-bits/
// Synced by: LinkCode
// Date: 10/2/2026, 12:16:24 AM
// ======================================


class Solution {
public:
    int hammingWeight(int n) {
        int cnt = 0;
        while (n != 0){
            n = n & (n -1);
            cnt++;
        }
            
        return cnt;
    }
};