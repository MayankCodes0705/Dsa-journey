// ======================================
// LeetCode Problem: sort list
// Language: cpp
// Link: https://leetcode.com/problems/sort-list/
// Synced by: LinkCode
// Date: 9/24/2026, 12:33:15 AM
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
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector<int>arr;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        sort(arr.begin(),arr.end());
        temp = head;
        int i = 0;
        while(temp!=NULL){
            temp->val=arr[i];
            i++;
            temp = temp->next;
        }
        return head;
        
        
    }
};