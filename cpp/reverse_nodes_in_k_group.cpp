// ======================================
// LeetCode Problem: reverse nodes in k group
// Language: cpp
// Link: https://leetcode.com/problems/reverse-nodes-in-k-group/
// Synced by: LinkCode
// Date: 9/29/2026, 11:01:32 PM
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
    ListNode* getKthNode(ListNode* temp, int k) {
        k--;

        while(temp != NULL && k > 0) {
            k--;
            temp = temp->next;
        }

        return temp;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* temp = head;

        while(temp != NULL) {
            ListNode* nextNode = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nextNode;
        }

        return prev;

    }

public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevLast = NULL;

        while(temp != NULL) {
            ListNode* kThNode = getKthNode(temp, k);

            if(kThNode == NULL) {
                if(prevLast)
                    prevLast->next = temp;
                break;
            }

            ListNode* nextNode = kThNode->next;
            kThNode->next = NULL;

            reverseList(temp);

            if(temp == head)
                head = kThNode;
            else
                prevLast->next = kThNode;

            prevLast = temp;
            temp = nextNode;
        }

        return head;
    }
};