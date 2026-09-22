// ======================================
// LeetCode Problem: reverse linked list
// Language: cpp
// Link: https://leetcode.com/problems/reverse-linked-list/
// Synced by: LinkCode
// Date: 9/23/2026, 12:59:37 AM
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
        ListNode* prev = NULL;
        ListNode* current = head;
        ListNode* next;

        while(current != NULL) {
            next = current->next;

            current->next = prev;

            prev = current;
            current = next;
        }

        return prev;
    }
};