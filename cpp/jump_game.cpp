// ======================================
// LeetCode Problem: jump game
// Language: cpp
// Link: https://leetcode.com/problems/jump-game/
// Synced by: LinkCode
// Date: 10/7/2026, 12:38:30 AM
// ======================================



class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal = nums.size() - 1;

        for (int i = goal - 1; i >= 0; --i) {
            if (i + nums[i] >= goal) {
                goal = i;
            }
        }

        return goal == 0;

    }
};