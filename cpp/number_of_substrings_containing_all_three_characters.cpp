// ======================================
// LeetCode Problem: number of substrings containing all three characters
// Language: cpp
// Link: https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/
// Synced by: LinkCode
// Date: 10/16/2026, 8:25:48 PM
// ======================================


class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int ans = 0;
        int l = 0;
        int r = 0; 
        unordered_map<int,int>mp;
        while(r<n){
            mp[s[r]-'a']++;
            while(mp[0]>0 && mp[1]>0 && mp[2]>0){
                ans += (n-r);
                mp[s[l] - 'a']--;
                l++;
            }
            r++;
        }

        return ans;
    }
};