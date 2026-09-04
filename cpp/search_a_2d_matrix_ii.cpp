// ======================================
// LeetCode Problem: search a 2d matrix ii
// Language: cpp
// Link: https://leetcode.com/problems/search-a-2d-matrix-ii/
// Synced by: LinkCode
// Date: 9/5/2026, 1:47:12 AM
// ======================================


class Solution {
public:
    bool binarySearch(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] == target)
                return true;

            else if (arr[mid] < target)
                low = mid + 1;

            else
                high = mid - 1;
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            if (binarySearch(matrix[i], target))
                return true;
        }

        return false;
    }
};