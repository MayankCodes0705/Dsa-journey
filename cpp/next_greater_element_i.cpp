// ======================================
// LeetCode Problem: next greater element i
// Language: cpp
// Link: https://leetcode.com/problems/next-greater-element-i/
// Synced by: LinkCode
// Date: 10/20/2026, 8:17:36 PM
// ======================================


class Solution {
    vector<int>Nge(vector<int>& nums2){
        int n = nums2.size();
        vector<int>NGE(n);
        stack<int>st;
        for(int i = n-1; i>=0; i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()) NGE[i]=-1;
            else NGE[i] = st.top();

            st.push(nums2[i]);
        }    
        return NGE;
    }
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int>NGE =  Nge(nums2); 
        unordered_map<int,int>mp;
        for(int i = 0; i<m; i++){
            mp[nums2[i]] = NGE[i];
        }

        vector<int>ans;
        for(int i = 0; i<n; i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};