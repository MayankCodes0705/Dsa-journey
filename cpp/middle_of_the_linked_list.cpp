// ======================================
// LeetCode Problem: middle of the linked list
// Language: cpp
// Link: https://leetcode.com/problems/middle-of-the-linked-list/
// Synced by: LinkCode
// Date: 9/25/2026, 12:07:58 AM
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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int curr = 0;

        while(temp != NULL){
            curr++;
            temp = temp->next;
        }
        
        int mid = curr/2;
        temp = head;
        while(mid--){
            temp = temp->next;
        }
        return temp;
    }
};