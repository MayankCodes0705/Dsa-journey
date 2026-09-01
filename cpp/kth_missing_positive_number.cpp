// ======================================
// LeetCode Problem: kth missing positive number
// Language: cpp
// Link: https://leetcode.com/problems/kth-missing-positive-number/
// Synced by: LinkCode
// Date: 9/1/2026, 11:10:02 PM
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