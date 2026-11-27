// ======================================
// LeetCode Problem: remove duplicates from sorted list
// Language: cpp
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/
// Synced by: LinkCode
// Date: 11/27/2026, 7:13:33 PM
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        while(temp!= NULL){
            ListNode* Next = temp -> next;
            while(Next != NULL && temp -> val == Next -> val){
                Next = Next -> next;
            }
            temp -> next = Next;
            temp = temp -> next;
        }

        return head;
        
    }
};