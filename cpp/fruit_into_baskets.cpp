// ======================================
// LeetCode Problem: fruit into baskets
// Language: cpp
// Link: https://leetcode.com/problems/fruit-into-baskets/
// Synced by: LinkCode
// Date: 10/15/2026, 6:18:39 PM
// ======================================


class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int maxLen = 0;
        int l = 0;
        int r = 0;
        unordered_map<int,int>mp;
        while(r<n){
            mp[fruits[r]]++;
            if(mp.size() > 2){
                if(mp.size() > 2){
                    mp[fruits[l]]--;
                }
                if(mp[fruits[l]] == 0) {
                    mp.erase(fruits[l]);
                }
                l++;
            }

            else{
                maxLen = max(maxLen,r-l+1);
            }    
            r++;
        } 
        return maxLen;
    }
};