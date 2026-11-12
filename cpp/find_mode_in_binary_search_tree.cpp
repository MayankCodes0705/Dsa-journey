// ======================================
// LeetCode Problem: find mode in binary search tree
// Language: cpp
// Link: https://leetcode.com/problems/find-mode-in-binary-search-tree/
// Synced by: LinkCode
// Date: 11/12/2026, 5:23:27 PM
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
    unordered_map<int, int> mp;
    vector<int> ans;
    int maxi = 0;

    void inorder(TreeNode* root) {
        if(root == NULL) return;

        inorder(root->left);

        mp[root->val]++;
        maxi = max(maxi, mp[root->val]);

        inorder(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        inorder(root);

        for(auto it : mp) {
            if(it.second == maxi) {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};
