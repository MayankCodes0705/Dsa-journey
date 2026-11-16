// ======================================
// LeetCode Problem: subtree of another tree
// Language: cpp
// Link: https://leetcode.com/problems/subtree-of-another-tree/
// Synced by: LinkCode
// Date: 11/16/2026, 8:25:54 PM
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

    bool isSame(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL && subRoot == NULL) return true;

        if(root == NULL || subRoot == NULL) return false;

        if(root->val != subRoot->val) return false;

        return isSame(root->left, subRoot->left) &&
               isSame(root->right, subRoot->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL) return false;

        if(isSame(root, subRoot)) return true;

        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};
