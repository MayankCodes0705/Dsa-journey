// ======================================
// LeetCode Problem: palindrome linked list
// Language: cpp
// Link: https://leetcode.com/problems/palindrome-linked-list/
// Synced by: LinkCode
// Date: 9/26/2026, 12:20:10 AM
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
    ListNode* reverse(ListNode* head) {

    ListNode* prev = NULL;
    ListNode* current = head;

    while(current != NULL) {

        ListNode* next = current->next;

        current->next = prev;

        prev = current;
        current = next;
    }

    return prev;
}
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!= NULL && fast->next->next!=NULL){
            slow = slow -> next;
            fast = fast-> next -> next;
        }

        ListNode* newHead = reverse(slow->next);
        ListNode* first = head;
        ListNode* second = newHead;

        while(second!= NULL){
            if(first -> val != second->val){
                reverse(newHead);
                return false;
            }
            first = first->next;
            second = second->next; 
        }
        reverse(newHead);
        return true;
    }
};