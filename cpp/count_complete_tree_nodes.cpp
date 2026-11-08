// ======================================
// LeetCode Problem: count complete tree nodes
// Language: cpp
// Link: https://leetcode.com/problems/count-complete-tree-nodes/
// Synced by: LinkCode
// Date: 11/8/2026, 5:53:16 PM
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
    int GetLeftNodes(TreeNode* root) {
        int count = 0;

        while(root) {
            count++;
            root = root->left;
        }

        return count;
    }

    int GetRightNodes(TreeNode* root) {
        int count = 0;

        while(root) {
            count++;
            root = root->right;
        }

        return count;
    }

    int countNodes(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }

        int lh = GetLeftNodes(root);
        int rh = GetRightNodes(root);

        if(lh == rh) {
            return (1 << lh) - 1;
        }

        return countNodes(root->left) + countNodes(root->right) + 1;
    }
};