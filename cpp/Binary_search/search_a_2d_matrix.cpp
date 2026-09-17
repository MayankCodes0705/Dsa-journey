// ======================================
// LeetCode Problem: search a 2d matrix
// Language: cpp
// Link: https://leetcode.com/problems/search-a-2d-matrix/
// Synced by: LinkCode
// Date: 9/5/2026, 1:17:03 AM
// ======================================


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0;
        int high = (n*m)-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            int row = mid / m;
            int col = mid % m;
            if(matrix[row][col]==target){
                return true;
            }
            if(matrix[row][col] > target){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return false;
    }
};