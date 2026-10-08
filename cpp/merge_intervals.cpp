// ======================================
// LeetCode Problem: merge intervals
// Language: cpp
// Link: https://leetcode.com/problems/merge-intervals/
// Synced by: LinkCode
// Date: 10/9/2026, 12:34:12 AM
// ======================================


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>>res;
        sort(intervals.begin(),intervals.end());
        int i = 0;
        while(i < n){
            int start = intervals[i][0];
            int end = intervals[i][1];
            i++;
            while(i < n && intervals[i][0] <= end){
                end = max(end,intervals[i][1]);
                i++;
            }
            res.push_back({start,end});
        }
        return res;
    }
};