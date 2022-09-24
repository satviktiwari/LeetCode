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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>temp;
        func(root, temp, ans, targetSum);
        return ans;
    }
    
    void func(TreeNode* root, vector<int>temp, vector<vector<int>>&ans, int targetSum){
        if(!root){
            return;
        }
        if(!root->left and !root->right and root->val == targetSum){
            temp.push_back(root->val);
            ans.push_back(temp);
            return;
        }
        temp.push_back(root->val);
        if(root->left){
            func(root->left, temp, ans, targetSum-root->val);
        }
        if(root->right){
            func(root->right, temp, ans, targetSum-root->val);
        }
    }
};