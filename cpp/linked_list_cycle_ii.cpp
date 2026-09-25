// ======================================
// LeetCode Problem: linked list cycle ii
// Language: cpp
// Link: https://leetcode.com/problems/linked-list-cycle-ii/
// Synced by: LinkCode
// Date: 9/26/2026, 3:06:05 AM
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
        ListNode* slow = head;
        ListNode* fast = head;

        // Detect cycle
        while(fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                slow = head;
                while(slow != fast){
                    slow = slow -> next;
                    fast = fast -> next;
                
                }
                return slow;
                
            }
        }

        return NULL;
        
    }
};