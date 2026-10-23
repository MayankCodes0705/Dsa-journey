// ======================================
// LeetCode Problem: sliding window maximum
// Language: cpp
// Link: https://leetcode.com/problems/sliding-window-maximum/
// Synced by: LinkCode
// Date: 10/23/2026, 7:22:46 PM
// ======================================


class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>ans;
        deque<int>deq;
        for(int i = 0; i<n; i++){
            while(!deq.empty() && deq.front()<= i-k){
                deq.pop_front();
            }
            while(!deq.empty() && nums[i] >= nums[deq.back()] ){
                deq.pop_back();
            }
            deq.push_back(i);

            if(i>= k-1){
                ans.push_back(nums[deq.front()]);
            }
        }
        return ans;
    }
};