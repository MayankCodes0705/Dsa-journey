// ======================================
// LeetCode Problem: largest odd number in string
// Language: cpp
// Link: https://leetcode.com/problems/largest-odd-number-in-string/
// Synced by: LinkCode
// Date: 9/12/2026, 9:53:03 PM
// ======================================


class Solution {
public:
    string largestOddNumber(string num) {
        for(int i = num.size() - 1; i >= 0; i--) {
            if((num[i] - '0') % 2 == 1)
                return num.substr(0, i + 1);
        }

        return "";
    }
};