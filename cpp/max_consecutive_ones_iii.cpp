// ======================================
// LeetCode Problem: max consecutive ones iii
// Language: cpp
// Link: https://leetcode.com/problems/max-consecutive-ones-iii/
// Synced by: LinkCode
// Date: 10/14/2026, 8:07:25 PM
// ======================================


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int MaxLen = 0;
        int l =0; 
        int r =0;
        int zeroes = 0;
        while(r<n){
            if(nums[r] == 0) zeroes++;
            if(zeroes > k){
                if(nums[l]==0)zeroes--;
                l++;
            }
            if(zeroes<=k){
                MaxLen = max(MaxLen,r-l+1);
            }
            r++;
        }
        return MaxLen;
        
    }
};