// ======================================
// LeetCode Problem: running sum of 1d array
// Language: cpp
// Link: https://leetcode.com/problems/running-sum-of-1d-array/
// Synced by: LinkCode
// Date: 8/31/2026, 10:17:53 PM
// ======================================


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(nums.size());

        ans[0] = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            ans[i] = ans[i - 1] + nums[i];
        }

        return ans;
    }
};