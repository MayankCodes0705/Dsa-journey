// ======================================
// LeetCode Problem: longest palindromic substring
// Language: cpp
// Link: https://leetcode.com/problems/longest-palindromic-substring/
// Synced by: LinkCode
// Date: 9/18/2026, 12:32:46 AM
// ======================================


class Solution {
public:

    bool isPalindrome(string &s, int i, int j) {
        while(i < j) {
            if(s[i] != s[j])
                return false;

            i++;
            j--;
        }

        return true;
    }

    string longestPalindrome(string s) {
        string ans = "";
        int n = s.length();

        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {

                if(isPalindrome(s, i, j)) {
                    if(j - i + 1 > ans.length())
                        ans = s.substr(i, j - i + 1);
                }
            }
        }

        return ans;
    }
};
