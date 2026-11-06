// ======================================
// LeetCode Problem: lowest common ancestor of a binary tree
// Language: cpp
// Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
// Synced by: LinkCode
// Date: 11/7/2026, 12:03:15 AM
// ======================================


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if(root == NULL || root == p || root == q)
            return root;

        TreeNode* left = lowestCommonAncestor(root->left, p, q);

        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        if(left == NULL)
            return right;

        else if(right == NULL)
            return left;

        else
            return root;
    }
};