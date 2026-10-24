// ======================================
// LeetCode Problem: largest rectangle in histogram
// Language: cpp
// Link: https://leetcode.com/problems/largest-rectangle-in-histogram/
// Synced by: LinkCode
// Date: 10/24/2026, 7:55:09 PM
// ======================================


class Solution {
    vector<int>NSE(vector<int>& heights,int &n){
        vector<int>NextSmallerElement(n);
        stack<int>st;
        for(int i =n-1; i>=0; i--){
            while(!st.empty() && heights[i] <= heights[st.top()]){
                st.pop();
            }
            if(st.empty()) NextSmallerElement[i] = n;
            else NextSmallerElement[i] = st.top();
            st.push(i);
        }
        return NextSmallerElement;
    }

    vector<int>PSE(vector<int>& heights,int &n){
        vector<int>PreviousSmallerElement(n);
        stack<int>st;
        for(int i =0; i<n; i++){
            while(!st.empty() && heights[i] <= heights[st.top()]){
                st.pop();
            }
            if(st.empty()) PreviousSmallerElement[i] = -1;
            else PreviousSmallerElement[i] = st.top();
            st.push(i);
        }
        return PreviousSmallerElement;
    }

    
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>Nse = NSE(heights,n);
        vector<int>Pse = PSE(heights,n);
        
        int ans = 0;
        for(int i =0 ; i<n ; i++){
            int currentArea = heights[i] * (Nse[i] - Pse[i] -1);
            ans = max(currentArea,ans);
        }
        return ans;
    }
};