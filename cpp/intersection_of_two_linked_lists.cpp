// ======================================
// LeetCode Problem: intersection of two linked lists
// Language: cpp
// Link: https://leetcode.com/problems/intersection-of-two-linked-lists/
// Synced by: LinkCode
// Date: 9/26/2026, 12:55:19 AM
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp = headA;
        map<ListNode*,int>mp;
        while(temp!=NULL){
            mp[temp] = 1;
            temp = temp->next;
        }

        ListNode* temp1 = headB;
        while(temp1 != NULL){
            if(mp.find(temp1)!= mp.end()) return temp1;
            temp1=temp1->next;
        }
        return NULL;
    }
};