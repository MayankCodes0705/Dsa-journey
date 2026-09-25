// ======================================
// LeetCode Problem: linked list cycle ii
// Language: cpp
// Link: https://leetcode.com/problems/linked-list-cycle-ii/
// Synced by: LinkCode
// Date: 9/26/2026, 2:49:54 AM
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
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp = head;
        unordered_set<ListNode*> st;

        while(temp != NULL) {
            if(st.find(temp) != st.end())
                return temp;

            st.insert(temp);
            temp = temp->next;
        }

        return NULL;
        
    }
};