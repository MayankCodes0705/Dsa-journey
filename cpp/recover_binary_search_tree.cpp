// ======================================
// LeetCode Problem: recover binary search tree
// Language: cpp
// Link: https://leetcode.com/problems/recover-binary-search-tree/
// Synced by: LinkCode
// Date: 11/14/2026, 7:11:40 PM
// ======================================


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    TreeNode* first = NULL;
    TreeNode* second = NULL;
    TreeNode* prev = NULL;

    void inorder(TreeNode* root) {
        if(root == NULL) return;

        inorder(root->left);

        if(prev != NULL && prev->val > root->val) {

            if(first == NULL) {
                first = prev;
            }

            second = root;
        }

        prev = root;

        inorder(root->right);
    }

    void recoverTree(TreeNode* root) {
        inorder(root);

        swap(first->val, second->val);
    }
};
