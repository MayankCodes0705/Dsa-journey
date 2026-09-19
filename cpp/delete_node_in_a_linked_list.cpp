// ======================================
// LeetCode Problem: delete node in a linked list
// Language: cpp
// Link: https://leetcode.com/problems/delete-node-in-a-linked-list/
// Synced by: LinkCode
// Date: 9/19/2026, 11:25:44 PM
// ======================================


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node;

        while (temp->next->next != NULL) {
            temp->val = temp->next->val;
            temp = temp->next;
        }

        temp->val = temp->next->val;
        temp->next = NULL;
    }
};