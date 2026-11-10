// ======================================
// LeetCode Problem: search in a binary search tree
// Language: cpp
// Link: https://leetcode.com/problems/search-in-a-binary-search-tree/
// Synced by: LinkCode
// Date: 11/10/2026, 7:59:07 PM
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
    TreeNode* searchBST(TreeNode* root, int val) {
    while(root != NULL && root->val != val) {
        if(val < root->val)
            root = root->left;
        else
            root = root->right;
    }

    return root;
}
};