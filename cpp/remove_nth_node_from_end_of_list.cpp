// ======================================
// LeetCode Problem: remove nth node from end of list
// Language: cpp
// Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// Synced by: LinkCode
// Date: 9/24/2026, 12:09:38 AM
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* temp = head;

        while(temp) {
            len++;
            temp = temp->next;
        }
        temp = head;
        ListNode* Prev = NULL;
        int No = len - n;
        for(int i = 1; i <=No; i++){
            Prev = temp;
            temp = temp -> next;
        }
        if(Prev == NULL)
            return head->next;

        Prev-> next = temp->next;
        return head;

    }
};