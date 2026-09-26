// ======================================
// LeetCode Problem: rotate list
// Language: cpp
// Link: https://leetcode.com/problems/rotate-list/
// Synced by: LinkCode
// Date: 9/27/2026, 12:13:54 AM
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
private:
    ListNode* findKthNode(ListNode* head , int k ){
        int cnt = 1;
        ListNode* temp = head;

        while(temp != NULL){
            if(cnt == k) return temp;
            cnt++;
            temp = temp -> next;
        }
        return temp;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0) return head;
        ListNode* tail = head;
        int len = 1;
        while(tail -> next!= NULL){
            len++;
            tail = tail -> next;
        }

        if(k % len == 0) return head;
        k = k % len;

        tail -> next = head;
        ListNode* kthNode = findKthNode(head,len - k);
        head = kthNode -> next;
        kthNode -> next = NULL;

        return head;
        
    }
};