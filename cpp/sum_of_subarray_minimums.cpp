// ======================================
// LeetCode Problem: sum of subarray minimums
// Language: cpp
// Link: https://leetcode.com/problems/sum-of-subarray-minimums/
// Synced by: LinkCode
// Date: 10/21/2026, 8:32:02 PM
// ======================================


class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();

        vector<int> left(n), right(n);
        stack<int> st;

        // Previous Smaller
        for(int i = 0; i < n; i++) {
            while(!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }

            if(st.empty())
                left[i] = -1;
            else
                left[i] = st.top();

            st.push(i);
        }

        while(!st.empty())
            st.pop();

        // Next Smaller
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            if(st.empty())
                right[i] = n;
            else
                right[i] = st.top();

            st.push(i);
        }

        long long ans = 0;

        for(int i = 0; i < n; i++) {
            long long leftCount = i - left[i];
            long long rightCount = right[i] - i;

            long long contribution =
                arr[i] * leftCount * rightCount;

            ans += contribution;
        }

        return ans % (1000000007);
    }
};