// ======================================
// LeetCode Problem: count number of nice subarrays
// Language: cpp
// Link: https://leetcode.com/problems/count-number-of-nice-subarrays/
// Synced by: LinkCode
// Date: 10/17/2026, 7:17:43 PM
// ======================================


class Solution {
public:
    int atMost(vector<int>& nums, int goal) {
        if (goal < 0)
            return 0;

        int l = 0;
        int r = 0;
        int sum = 0;
        int cnt = 0;

        while (r < nums.size()) {
            sum += nums[r] % 2;

            while (sum > goal) {
                sum -= nums[l] % 2;
                l++;
            }

            cnt += r - l + 1;
            r++;
        }

        return cnt;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};