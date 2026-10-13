// ======================================
// LeetCode Problem: max consecutive ones iii
// Language: cpp
// Link: https://leetcode.com/problems/max-consecutive-ones-iii/
// Synced by: LinkCode
// Date: 10/13/2026, 11:36:05 PM
// ======================================


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int zeros = 0;
        int maxi = 0;

        for (int right = 0; right < nums.size(); right++) {

            if (nums[right] == 0)
                zeros++;

            while (zeros > k) {
                if (nums[left] == 0)
                    zeros--;

                left++;
            }

            maxi = max(maxi, right - left + 1);
        }

        return maxi;
    }
};
