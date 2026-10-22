// ======================================
// LeetCode Problem: remove k digits
// Language: cpp
// Link: https://leetcode.com/problems/remove-k-digits/
// Synced by: LinkCode
// Date: 10/22/2026, 9:10:05 PM
// ======================================


class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans = "";
        int n = num.length();
        stack<char>st;
        for(int i = 0; i<n;i++){
            if(n == k) return "0";
            
            while(!st.empty() && k>0 && st.top() > num[i] ){
                st.pop();
                k--;
            }
                st.push(num[i]);
        }
        while(k>0){
            st.pop();
            k--;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        

        reverse(ans.begin(),ans.end());

        int i = 0;
        while (i < ans.length() && ans[i] == '0') {
            i++;
        }

        ans = ans.substr(i);
        if(ans == "") return "0";

        return ans;
    }
};