// ======================================
// LeetCode Problem: non overlapping intervals
// Language: cpp
// Link: https://leetcode.com/problems/non-overlapping-intervals/
// Synced by: LinkCode
// Date: 10/8/2026, 12:32:47 AM
// ======================================


class Solution {
public:
    static bool comp(vector<int>&a , vector<int>&b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end(),comp);
        int n = intervals.size();

        int cnt = 1;
        int EndTime = intervals[0][1];
        for(int i = 1; i<n; i++){
            if(intervals[i][0] >= EndTime){
                cnt++;
                EndTime = intervals[i][1];

            }
        }
        return n - cnt;
    }
};