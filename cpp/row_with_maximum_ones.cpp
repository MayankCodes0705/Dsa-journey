// ======================================
// LeetCode Problem: row with maximum ones
// Language: cpp
// Link: https://leetcode.com/problems/row-with-maximum-ones/
// Synced by: LinkCode
// Date: 9/4/2026, 11:36:53 PM
// ======================================


class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {

        int maxOnes = 0;
        int row = 0;

        for (int i = 0; i < mat.size(); i++) {

            int count = 0;

            for (int j = 0; j < mat[i].size(); j++) {

                if (mat[i][j] == 1)
                    count++;
            }

            if (count > maxOnes) {
                maxOnes = count;
                row = i;
            }
        }

        return {row, maxOnes};
    }
};