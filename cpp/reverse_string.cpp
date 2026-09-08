// ======================================
// LeetCode Problem: reverse string
// Language: cpp
// Link: https://leetcode.com/problems/reverse-string/
// Synced by: LinkCode
// Date: 9/9/2026, 12:04:44 AM
// ======================================


class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0; 
        int end = s.size() - 1;
        while(st<=end){
            swap(s[st],s[end]);
            end--;
            st++;
        }
        
    }
};