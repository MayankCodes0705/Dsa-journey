// ======================================
// LeetCode Problem: find a peak element ii
// Language: cpp
// Link: https://leetcode.com/problems/find-a-peak-element-ii/
// Synced by: LinkCode
// Date: 9/5/2026, 10:38:12 PM
// ======================================


class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int m = mat.size();
        int n = mat[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (i > 0 && mat[i][j] <= mat[i-1][j])
                    continue;

                if (i < m-1 && mat[i][j] <= mat[i+1][j])
                    continue;

                if (j > 0 && mat[i][j] <= mat[i][j-1])
                    continue;

                if (j < n-1 && mat[i][j] <= mat[i][j+1])
                    continue;

                return {i, j};
            }
        }

        return {-1, -1};
    }
};