// ======================================
// LeetCode Problem: string to integer atoi
// Language: cpp
// Link: https://leetcode.com/problems/string-to-integer-atoi/
// Synced by: LinkCode
// Date: 9/17/2026, 11:19:12 PM
// ======================================


class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();

        while(i<n && s[i]==' '){
            i++;
        }

        int sign = 1;
        if(i<n && s[i]=='-'){
            sign = -1;
            i++;
        }else if(i<n && s[i]=='+'){
            i++;
        }

        long long ans = 0;

        while(i < n && isdigit(s[i])){
            ans = ans * 10 + (s[i]-'0');
            i++;
            if(ans * sign > INT_MAX){
                return INT_MAX;
            }
            if(ans * sign < INT_MIN){
                return INT_MIN;
            }
        }
        

        
     return ans * sign; 

    }
};