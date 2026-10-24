// ======================================
// LeetCode Problem: maximal rectangle
// Language: cpp
// Link: https://leetcode.com/problems/maximal-rectangle/
// Synced by: LinkCode
// Date: 10/24/2026, 8:54:54 PM
// ======================================


class Solution {
public:
    vector<int> NSE(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && arr[st.top()] >= arr[i])
                st.pop();

            if (st.empty())
                ans[i] = n;
            else
                ans[i] = st.top();

            st.push(i);
        }

        return ans;
    }

    vector<int> PSE(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;

        for (int i = 0; i < n; i++) {

            while (!st.empty() && arr[st.top()] >= arr[i])
                st.pop();

            if (st.empty())
                ans[i] = -1;
            else
                ans[i] = st.top();

            st.push(i);
        }

        return ans;
    }

    int largestRectangle(vector<int>& arr) {

        int n = arr.size();

        vector<int> nse = NSE(arr);
        vector<int> pse = PSE(arr);

        int maxArea = 0;

        for (int i = 0; i < n; i++) {

            int width = nse[i] - pse[i] - 1;

            int area = arr[i] * width;

            maxArea = max(maxArea, area);
        }

        return maxArea;
    }

    vector<vector<int>> prefixSum(vector<vector<char>>& mat) {

        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> psum(n, vector<int>(m, 0));

        for (int j = 0; j < m; j++) {

            int sum = 0;

            for (int i = 0; i < n; i++) {

                if (mat[i][j] == '0')
                    sum = 0;
                else
                    sum += 1;

                psum[i][j] = sum;
            }
        }

        return psum;
    }

    int maximalRectangle(vector<vector<char>>& mat) {

        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> psum = prefixSum(mat);
        int maxArea = 0;

        for (int i = 0; i < n; i++) {
            int area = largestRectangle(psum[i]);
            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};