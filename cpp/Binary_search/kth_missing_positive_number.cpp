// ======================================
// LeetCode Problem: kth missing positive number
// Language: cpp
// Link: https://leetcode.com/problems/kth-missing-positive-number/
// Synced by: LinkCode
// Date: 9/2/2026, 10:56:19 PM
// ======================================


class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for (int num : arr) {
            if (num <= k) {
                k++;
            } else {
                break;
            }
        }
        return k;
    }
};