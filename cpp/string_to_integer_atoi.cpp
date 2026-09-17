// ======================================
// LeetCode Problem: string to integer atoi
// Language: cpp
// Link: https://leetcode.com/problems/string-to-integer-atoi/
// Synced by: LinkCode
// Date: 9/17/2026, 11:11:27 PM
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

        string num = "";
        while(i < n && isdigit(s[i])){
            num += s[i];
            i++;
        }

        long long ans = 0;
        int j = 0;

        while(j < num.length()){
            ans = ans * 10 + (num[j]-'0');
            j++;
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