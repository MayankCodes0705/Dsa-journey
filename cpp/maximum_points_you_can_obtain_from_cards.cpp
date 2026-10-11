// ======================================
// LeetCode Problem: maximum points you can obtain from cards
// Language: cpp
// Link: https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
// Synced by: LinkCode
// Date: 10/12/2026, 12:18:01 AM
// ======================================


class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int Lsum = 0; 
        int Rsum = 0;
        int MaxSum = 0;

        for(int i = 0; i <k;i++){
            Lsum+=cardPoints[i];
            MaxSum = Lsum; 
        }
        int r = n-1;
        for(int i = k-1;i>=0;i--){
            Lsum-= cardPoints[i];
            Rsum+=cardPoints[r];
            r--;
            MaxSum = max(MaxSum,(Lsum + Rsum));
        }
        return MaxSum;
    }
};