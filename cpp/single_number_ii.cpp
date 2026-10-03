// ======================================
// LeetCode Problem: single number ii
// Language: cpp
// Link: https://leetcode.com/problems/single-number-ii/
// Synced by: LinkCode
// Date: 10/4/2026, 12:49:31 AM
// ======================================


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int ones = 0;
        int twos = 0;
        for(int i = 0; i<n; i++){
            ones = (ones ^ nums[i] & (~(twos)));
            twos = (twos ^ nums[i] & (~(ones)));
        }
        return ones;
    }
};