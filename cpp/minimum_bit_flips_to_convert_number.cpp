// ======================================
// LeetCode Problem: minimum bit flips to convert number
// Language: cpp
// Link: https://leetcode.com/problems/minimum-bit-flips-to-convert-number/
// Synced by: LinkCode
// Date: 10/2/2026, 12:16:13 AM
// ======================================


class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start ^ goal;
        int cnt = 0;
        for(int i = 0; i <= 31 ;i++){
            if(ans & (1 << i)) cnt++;
        }
        return cnt;
        
    }
};