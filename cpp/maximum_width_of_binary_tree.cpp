// ======================================
// LeetCode Problem: maximum width of binary tree
// Language: cpp
// Link: https://leetcode.com/problems/maximum-width-of-binary-tree/
// Synced by: LinkCode
// Date: 11/7/2026, 6:00:26 PM
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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        typedef unsigned long long ll;
        queue<pair<TreeNode*, ll>>q;
        q.push({root,0});
        ll MaxW = 0;
        while(!q.empty()){
            ll n = q.size();
            ll l = q.front().second;
            ll r = q.back().second;
            MaxW = max(MaxW,r-l+1);

            while(n--){
                TreeNode* node = q.front().first;
                ll idx = q.front().second;
                q.pop();

                if(node->left){
                    q.push({node->left,2*idx+1});
                } 
                if(node->right){
                    q.push({node->right,2*idx+2});
                } 
            }
        }
        return MaxW;
    }
};