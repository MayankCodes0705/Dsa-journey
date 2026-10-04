// ======================================
// LeetCode Problem: assign cookies
// Language: cpp
// Link: https://leetcode.com/problems/assign-cookies/
// Synced by: LinkCode
// Date: 10/5/2026, 12:19:27 AM
// ======================================


class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int l = 0;
        int r = 0;
        int n = s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(r<n && l<g.size()){
            if(g[l] <= s[r]){
                l++;
            }
            r++;

        }
        return l;
    }
};