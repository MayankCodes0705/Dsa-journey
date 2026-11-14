// ======================================
// LeetCode Problem: two sum iv input is a bst
// Language: cpp
// Link: https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
// Synced by: LinkCode
// Date: 11/14/2026, 6:33:08 PM
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
    vector<int>ans;
    void Inorder(TreeNode* root){
        if(root == NULL) return;

        Inorder(root->left);
        ans.push_back(root->val);
        Inorder(root->right);
    }

    bool find(int k){
        int n = ans.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            int sum = ans[i] + ans[j];

            if(sum<k) {
                i++;
            }else if(sum>k){
                j--;
            }
            else{
                return true;
                break;
            }
        }
        return false;


    }
    bool findTarget(TreeNode* root, int k) {
        Inorder(root);
        return find(k);

    }
};