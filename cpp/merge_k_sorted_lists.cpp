// ======================================
// LeetCode Problem: merge k sorted lists
// Language: cpp
// Link: https://leetcode.com/problems/merge-k-sorted-lists/
// Synced by: LinkCode
// Date: 9/28/2026, 12:11:04 AM
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
    ListNode* MergeLists(ListNode* head1,ListNode* head2){
        ListNode* temp1 = head1;
        ListNode* temp2 = head2;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;

        while(temp1 != NULL && temp2 != NULL){
            if(temp1 -> val <= temp2 -> val){
                temp -> next = temp1;
                temp = temp1;
                temp1 = temp1 -> next;
            }else{
                temp -> next = temp2;
                temp = temp2;
                temp2 = temp2 -> next;
            }
        }
        if(temp1) temp -> next = temp1;
        else temp -> next = temp2;
        return dummyNode -> next;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty())
            return NULL;
        ListNode* head = lists[0];
        for(int i = 1; i < lists.size(); i++){
            ListNode* temp = lists[i];
            head = MergeLists(head,temp);
        }
        return head;
        
    }
};