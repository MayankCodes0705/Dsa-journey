// ======================================
// LeetCode Problem: palindrome linked list
// Language: cpp
// Link: https://leetcode.com/problems/palindrome-linked-list/
// Synced by: LinkCode
// Date: 9/26/2026, 12:11:45 AM
// ======================================


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        stack<int>st;
        while(temp!= NULL){
            st.push(temp->val);
            temp = temp->next;
        }

        temp = head;
        while(temp!=NULL){
            if(temp->val != st.top()) return false;
            st.pop();
            temp = temp->next;
            
        }
        return true;
    }
};