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
    
    void solve(TreeNode* root, unordered_map<int,int>&mp){
        if(!root){
            return;
        }
        solve(root->left, mp);
        mp[root->val]++;
        solve(root->right, mp);
    }
    
    bool isUnivalTree(TreeNode* root) {
        unordered_map<int,int>mp;
        solve(root, mp);
        return mp.size() == 1;
    }
};