// ======================================
// LeetCode Problem: find a peak element ii
// Language: cpp
// Link: https://leetcode.com/problems/find-a-peak-element-ii/
// Synced by: LinkCode
// Date: 9/6/2026, 12:04:26 AM
// ======================================


class Solution {
public:

    int findMaxIndex(vector<vector<int>>& mat, int n, int m, int col) {
        int maxValue = -1;
        int index = -1;

        for (int i = 0; i < n; i++) {
            if (mat[i][col] > maxValue) {
                maxValue = mat[i][col];
                index = i;
            }
        }

        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int low = 0;
        int high = m - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            int maxRowIndex = findMaxIndex(mat, n, m, mid);

            int current = mat[maxRowIndex][mid];

            int left = -1;
            int right = -1;

            if (mid - 1 >= 0)
                left = mat[maxRowIndex][mid - 1];

            if (mid + 1 < m)
                right = mat[maxRowIndex][mid + 1];

            if (current > left && current > right) {
                return {maxRowIndex, mid};
            }
            else if (current < left) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return {-1, -1};
    }
};