// ======================================
// LeetCode Problem: longest common prefix
// Language: cpp
// Link: https://leetcode.com/problems/longest-common-prefix/
// Synced by: LinkCode
// Date: 9/13/2026, 10:40:30 PM
// ======================================


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        for(int i = 0; i < strs[0].size(); i++) {
            char ch = strs[0][i];

            for(int j = 1; j < strs.size(); j++) {
                if(i >= strs[j].size() || strs[j][i] != ch)
                    return ans;
            }

            ans += ch;
        }

        return ans;
    }
};