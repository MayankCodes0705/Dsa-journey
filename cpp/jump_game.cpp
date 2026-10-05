// ======================================
// LeetCode Problem: jump game
// Language: cpp
// Link: https://leetcode.com/problems/jump-game/
// Synced by: LinkCode
// Date: 10/6/2026, 1:30:41 AM
// ======================================



class Solution {
public:
    bool canJump(std::vector<int>& nums) {
        int max_reach = 0;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            // If current index is beyond the furthest reachable point
            if (i > max_reach) {
                return false;
            }
            
            max_reach = max(max_reach, i + nums[i]);
            
            // Early exit if the target is already reachable
            if (max_reach >= n - 1) {
                return true;
            }
        }

        return true;
    }
};