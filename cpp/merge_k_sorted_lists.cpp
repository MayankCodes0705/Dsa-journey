// ======================================
// LeetCode Problem: merge k sorted lists
// Language: cpp
// Link: https://leetcode.com/problems/merge-k-sorted-lists/
// Synced by: LinkCode
// Date: 9/28/2026, 12:10:11 AM
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<int>arr;
        for(int i = 0; i < lists.size(); i++){
            ListNode* temp = lists[i];
            while(temp!= NULL){
                arr.push_back(temp->val);
                temp = temp->next;
            }
        }
        if(arr.empty()){
            return NULL;
        }
        
        sort(arr.begin(),arr.end());
        ListNode* arrHEAD = new ListNode(arr[0]);
        ListNode* temp = arrHEAD;
        for(int i = 1; i < arr.size(); i++){
            temp->next = new ListNode(arr[i]);
            temp = temp -> next; 

        }

        return arrHEAD;
        
    }
};