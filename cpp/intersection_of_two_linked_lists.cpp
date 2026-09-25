// ======================================
// LeetCode Problem: intersection of two linked lists
// Language: cpp
// Link: https://leetcode.com/problems/intersection-of-two-linked-lists/
// Synced by: LinkCode
// Date: 9/26/2026, 1:38:19 AM
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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {

        ListNode* t1 = headA;
        ListNode* t2 = headB;

        while(t1 != t2) {

            if(t1 == NULL)
                t1 = headB;
            else
                t1 = t1->next;

            if(t2 == NULL)
                t2 = headA;
            else
                t2 = t2->next;
        }

        return t1;
    }
};