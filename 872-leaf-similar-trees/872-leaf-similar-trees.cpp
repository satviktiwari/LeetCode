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
    
    void solve1(TreeNode* root1, vector<int>&v1){
        if(!root1){
            return;
        }
        solve1(root1->left, v1);
        if(!root1->left and !root1->right){
            v1.push_back(root1->val);
        }
        solve1(root1->right, v1);
    }
    
    void solve2(TreeNode* root2, vector<int>&v2){
        if(!root2){
            return;
        }
        solve2(root2->left, v2);
        if(!root2->left and !root2->right){
            v2.push_back(root2->val);
        }
        solve2(root2->right, v2);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1, v2;
        solve1(root1, v1);
        solve2(root2, v2);
        return v1 == v2;
    }
};