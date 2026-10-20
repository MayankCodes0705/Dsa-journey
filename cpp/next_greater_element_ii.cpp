//Approach : MONOTONIC stack
// ======================================
// LeetCode Problem: next greater element ii
// Language: cpp
// Link: https://leetcode.com/problems/next-greater-element-ii/
// Synced by: LinkCode
// Date: 10/20/2026, 8:47:11 PM
// ======================================


class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        int n = nums.size();
        
        vector<int> temp = nums;

        for(int i = 0; i < n; i++) {
            temp.push_back(nums[i]);
        }

        int m = temp.size();

        vector<int> NGE(m);

        stack<int> st;

        
        for(int i = m - 1; i >= 0; i--) {

            while(!st.empty() && st.top() <= temp[i]) {
                st.pop();
            }

            if(st.empty())
                NGE[i] = -1;
            else
                NGE[i] = st.top();

            st.push(temp[i]);
        }

        
        vector<int> ans;

        for(int i = 0; i < n; i++) {
            ans.push_back(NGE[i]);
        }

        return ans;
    }
};
