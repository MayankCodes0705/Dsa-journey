// ======================================
// LeetCode Problem: subarrays with k different integers
// Language: cpp
// Link: https://leetcode.com/problems/subarrays-with-k-different-integers/
// Synced by: LinkCode
// Date: 10/18/2026, 2:00:14 PM
// ======================================


class Solution {
public:
    int subarrayWithKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int l = 0;
        int r = 0;
        unordered_map<int,int>mp;
        while(r<n){
            mp[nums[r]]++;
            while(mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]] == 0) mp.erase(nums[l]);
                l++;
            }
            ans+=r-l+1;
            r++;
        }
        return ans;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return subarrayWithKDistinct(nums,k) - subarrayWithKDistinct(nums,k-1);
    }    

};