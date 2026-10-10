// ======================================
// LeetCode Problem: jump game ii
// Language: cpp
// Link: https://leetcode.com/problems/jump-game-ii/
// Synced by: LinkCode
// Date: 10/11/2026, 12:56:45 AM
// ======================================


class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int l = 0;
        int r = 0;
        int n = nums.size();

        while(r < n - 1) {

            int farthest = 0;

            for(int i = l; i <= r; i++) {
                farthest = max(farthest, i + nums[i]);
            }

            l = r + 1;
            r = farthest;

            jumps++;
        }

        return jumps;
        
    }
};