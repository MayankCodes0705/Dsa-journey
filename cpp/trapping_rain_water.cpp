// ======================================
// LeetCode Problem: trapping rain water
// Language: cpp
// Link: https://leetcode.com/problems/trapping-rain-water/
// Synced by: LinkCode
// Date: 10/23/2026, 8:47:26 PM
// ======================================


class Solution {
    vector<int>LeftMax(vector<int>& height,int &n){
        vector<int>LeftMax(n);
        LeftMax[0] = height[0];
        for(int i =1;i<n;i++){
            LeftMax[i] = max(LeftMax[i-1],height[i]);
        }
        return LeftMax;
    }

    vector<int>RightMax(vector<int>& height,int &n){
        vector<int>RightMax(n);
        RightMax[n-1] = height[n-1];
        for(int i =n-2;i>=0;i--){
            RightMax[i] = max(RightMax[i+1],height[i]);
        }
        return RightMax;
    }
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        vector<int> Left = LeftMax(height,n);
        vector<int>Right = RightMax(height,n);
        for(int i =0; i<n; i++){
            int width = 1;
            int total = min(Left[i],Right[i]) - height[i];
            ans += (width * total);
        }
        return ans;
    }
};