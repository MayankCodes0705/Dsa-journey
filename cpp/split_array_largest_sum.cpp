// ======================================
// LeetCode Problem: split array largest sum
// Language: cpp
// Link: https://leetcode.com/problems/split-array-largest-sum/
// Synced by: LinkCode
// Date: 9/3/2026, 1:48:32 AM
// ======================================


class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while(low <= high){
            int maxArray = low + (high - low)/2;
            int currentSum = 0;
            int subArray = 1;
            for(int i = 0; i < n; i++){
                if(currentSum + nums[i] > maxArray){
                    subArray ++;
                    currentSum = nums[i];
                }else{
                    currentSum += nums[i];
                }
            }if(subArray <= k){
                high = maxArray - 1;
            }else{
                low = maxArray + 1;
            }
        }
        
        return low;
    }
};