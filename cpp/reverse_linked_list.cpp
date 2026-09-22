// ======================================
// LeetCode Problem: reverse linked list
// Language: cpp
// Link: https://leetcode.com/problems/reverse-linked-list/
// Synced by: LinkCode
// Date: 9/23/2026, 12:20:25 AM
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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        stack<int>st;
        while(temp!=NULL){
            st.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(temp!= NULL){
            temp->val = st.top();
            st.pop();
            temp = temp->next;
        }
        return head;
    }
};