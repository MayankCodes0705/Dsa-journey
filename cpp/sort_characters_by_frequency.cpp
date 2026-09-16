// ======================================
// LeetCode Problem: sort characters by frequency
// Language: cpp
// Link: https://leetcode.com/problems/sort-characters-by-frequency/
// Synced by: LinkCode
// Date: 9/17/2026, 12:55:30 AM
// ======================================


class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        for(char ch: s){
            freq[ch]++;
        }

        vector<pair<char,int>>v(freq.begin(),freq.end());

        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second > b.second;
        });

        string ans = "";
        for(auto p: v){
            ans += string(p.second,p.first);
        }
        return ans;
    }
};