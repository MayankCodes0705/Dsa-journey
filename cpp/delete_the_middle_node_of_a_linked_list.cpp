// ======================================
// LeetCode Problem: delete the middle node of a linked list
// Language: cpp
// Link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
// Synced by: LinkCode
// Date: 9/25/2026, 12:07:43 AM
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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return NULL;
        }
        ListNode* temp = head;
        int curr = 0;

        while(temp != NULL){
            curr++;
            temp = temp->next;
        }
        
        int mid = curr/2;
        temp = head;
        ListNode* prev = NULL;
        while(mid--){
            prev = temp;
            temp = temp->next;
        }

        prev->next = temp->next;
        return head;
    }
};