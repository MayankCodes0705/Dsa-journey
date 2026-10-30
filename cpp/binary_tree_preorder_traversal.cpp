// ======================================
// LeetCode Problem: binary tree preorder traversal
// Language: cpp
// Link: https://leetcode.com/problems/binary-tree-preorder-traversal/
// Synced by: LinkCode
// Date: 10/30/2026, 7:44:45 PM
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
    void PreOrder(TreeNode* root,vector<int>& ans){
        if(root == NULL) return;

        ans.push_back(root -> val);
        PreOrder(root->left,ans);
        PreOrder(root -> right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        PreOrder(root,ans);
        return ans; 
    }
};