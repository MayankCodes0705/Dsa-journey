// ======================================
// LeetCode Problem: balanced binary tree
// Language: cpp
// Link: https://leetcode.com/problems/balanced-binary-tree/
// Synced by: LinkCode
// Date: 11/2/2026, 8:27:40 PM
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

    int height(TreeNode* root) {
        if(root == NULL)
            return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        return 1 + max(lh, rh);
    }

    bool isBalanced(TreeNode* root) {

        if(root == NULL)
            return true;

        int leftH = height(root->left);
        int rightH = height(root->right);

        if(abs(leftH - rightH) > 1)
            return false;

        return isBalanced(root->left) &&
               isBalanced(root->right);
    }
};