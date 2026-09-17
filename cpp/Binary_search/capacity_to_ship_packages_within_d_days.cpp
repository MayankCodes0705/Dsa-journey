// ======================================
// LeetCode Problem: capacity to ship packages within d days
// Language: cpp
// Link: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
// Synced by: LinkCode
// Date: 8/31/2026, 11:58:49 PM
// ======================================


class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();

        int mini = *max_element(weights.begin(), weights.end());
        int maxi = accumulate(weights.begin(), weights.end(), 0);
        int low = mini;
        int high = maxi;
        while(low<=high){
            int capacity = low + (high - low)/2;
            long long currentWeight = 0;
            int requiredDays = 1;

            for(int i = 0; i < n; i++) {

                if(currentWeight + weights[i] > capacity) {
                    requiredDays++;
                    currentWeight = 0;
                }
                    currentWeight += weights[i];
                
            }

            if(requiredDays <= days){
                high = capacity - 1;
            }else{
                low = capacity + 1;
            }
        }

        
        return low;
    }
};