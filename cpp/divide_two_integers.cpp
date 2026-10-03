// ======================================
// LeetCode Problem: divide two integers
// Language: cpp
// Link: https://leetcode.com/problems/divide-two-integers/
// Synced by: LinkCode
// Date: 10/4/2026, 12:15:45 AM
// ======================================


class Solution {
public:
    int divide(int dividend, int divisor) {
        bool sign = true;
        if(dividend >= 0 && divisor<0) sign = false;
        if(dividend < 0 && divisor>=0) sign = false;

        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);
        long long ans = 0;
        while(n >= d){
            int cnt = 0;
            while(n>= d<<(cnt+1)){
                cnt++;
            }
            ans+= 1<<(cnt);
            n -= (d<<(cnt));
        }

        if(ans == (1<<31) && sign == true) return INT_MAX;
        if(ans == (1<<31) && sign == false) return INT_MIN;

        return sign ? ans:-ans;

    }   
};