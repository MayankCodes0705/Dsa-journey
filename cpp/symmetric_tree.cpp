// ======================================
// LeetCode Problem: symmetric tree
// Language: cpp
// Link: https://leetcode.com/problems/symmetric-tree/
// Synced by: LinkCode
// Date: 11/3/2026, 7:33:31 PM
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

    bool check(TreeNode* l, TreeNode* r) {

        // Both NULL
        if (l == NULL && r == NULL)
            return true;

        // One NULL, other not NULL
        if (l == NULL || r == NULL)
            return false;

        // Values must be same
        // AND subtrees must be mirror images
        if ((l->val == r->val) &&
            check(l->left, r->right) &&
            check(l->right, r->left))
        {
            return true;
        }

        return false;
    }

    bool isSymmetric(TreeNode* root) {

        // Empty tree is symmetric
        if (!root)
            return true;

        return check(root->left, root->right);
    }
};