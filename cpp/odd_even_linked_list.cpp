// ======================================
// LeetCode Problem: odd even linked list
// Language: cpp
// Link: https://leetcode.com/problems/odd-even-linked-list/
// Synced by: LinkCode
// Date: 9/24/2026, 12:10:15 AM
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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* temp = head;
        vector<int>arr;

        while(temp!= NULL && temp->next!=NULL){
            arr.push_back(temp->val);
            temp = temp->next->next;
        }
        if(temp){
            arr.push_back(temp->val);
        }

        temp = head->next;
        while(temp!= NULL && temp->next!=NULL){
            arr.push_back(temp->val);
            temp = temp->next->next;
        }
        if(temp){
            arr.push_back(temp->val);
        }

        int i = 0;
        temp = head;
        while(temp!=NULL){
            temp->val = arr[i];
            i++;
            temp = temp->next;
        }
        
        return head;

    }
};