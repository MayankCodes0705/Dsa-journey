// ======================================
// LeetCode Problem: lemonade change
// Language: cpp
// Link: https://leetcode.com/problems/lemonade-change/
// Synced by: LinkCode
// Date: 10/5/2026, 12:25:26 AM
// ======================================


class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        int n = bills.size();
        for(int i =0; i<n ; i++){
            if(bills[i] == 5)five++;
            else if(bills[i] == 10){
                if(five){
                    five--;
                    ten++;
                }else return false;
            }
            else{
                if(ten && five){
                    ten --;
                    five --;
                }else if(five >= 3){
                    five-= 3;
                }else return false;
            }
        }
        return true;
    }
};