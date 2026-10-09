// ======================================
// LeetCode Problem: valid parenthesis string
// Language: cpp
// Link: https://leetcode.com/problems/valid-parenthesis-string/
// Synced by: LinkCode
// Date: 10/10/2026, 12:02:50 AM
// ======================================


class Solution {
public:
    bool checkValidString(string s) {
        int n = s.length();
        int min = 0; 
        int max = 0;
        for(int i =0; i<n; i++){
            if(s[i] == '('){
                min = min +1;
                max = max + 1;
            }
            else if(s[i] == ')'){
                min = min - 1;
                max = max - 1;
            }
            else{
                min = min - 1;
                max = max + 1;
            }
            if(min < 0) min = 0;
            if(max < 0) return false;
            
        }
        return (min == 0);
    }
};