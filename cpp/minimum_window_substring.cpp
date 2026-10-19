// ======================================
// LeetCode Problem: minimum window substring
// Language: cpp
// Link: https://leetcode.com/problems/minimum-window-substring/
// Synced by: LinkCode
// Date: 10/19/2026, 7:40:01 PM
// ======================================


class Solution {
public:
    string minWindow(string s, string t) {

        int n = s.length();
        int m = t.length();

        vector<int> hash(256, 0);

        // Store frequency required from t
        for(int i = 0; i < m; i++) {
            hash[t[i]]++;
        }

        int left = 0;
        int right = 0;

        int cnt = 0;

        int minLen = INT_MAX;
        int stIndex = 0;

        while(right < n) {

            // Include s[right] in the window
            if(hash[s[right]] > 0) {
                cnt++;
            }

            hash[s[right]]--;
            right++;

            // Window contains all characters of t
            while(cnt == m) {

                // Update answer
                if(right - left < minLen) {
                    minLen = right - left;
                    stIndex = left;
                }

                // Remove s[left] from window
                hash[s[left]]++;

                if(hash[s[left]] > 0) {
                    cnt--;
                }

                left++;
            }
        }

        if(minLen == INT_MAX)
            return "";

        return s.substr(stIndex, minLen);
    }
};