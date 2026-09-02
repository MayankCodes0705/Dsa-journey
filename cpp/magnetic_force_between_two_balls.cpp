// ======================================
// LeetCode Problem: magnetic force between two balls
// Language: cpp
// Link: https://leetcode.com/problems/magnetic-force-between-two-balls/
// Synced by: LinkCode
// Date: 9/2/2026, 11:59:50 PM
// ======================================


class Solution {
public:
    int maxDistance(vector<int>& position, int m) {

        sort(position.begin(), position.end());

        int n = position.size();

        int low = 1;
        int high = position[n - 1] - position[0];

        while(low<=high){
            int reqForce = low + (high - low)/2;

            int countBalls = 1;
            int lastBall = position[0];

            for (int i = 1; i < n; i++) {

                if (position[i] - lastBall >= reqForce) {
                    countBalls++;
                    lastBall = position[i];
                }
            }

            if (countBalls >= m) {
                low = reqForce + 1;
            }else{
                high = reqForce - 1;
            }
        }

        return high;
    }
};