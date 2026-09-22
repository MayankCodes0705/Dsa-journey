// ======================================
// LeetCode Problem: best time to buy and sell stock
// Language: cpp
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Synced by: LinkCode
// Date: 9/22/2026, 11:18:38 PM
// ======================================


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int profit = 0;

        for(int i = 1; i < prices.size(); i++) {
            profit = max(profit, prices[i] - mini);
            mini = min(mini, prices[i]);
        }

        return profit;
    }
};