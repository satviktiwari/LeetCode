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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int level = 0;
        while(!q.empty()){
            int sz = q.size();
            vector<int>v;
            for(int i = 0; i < sz; i++){
                TreeNode* temp = q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            if(level % 2 == 0){
                for(int i = 0; i < v.size(); i++){
                    if(v[i]%2 == 0){
                        return false;
                    }
                }
                for(int i = 0; i < v.size()-1; i++){
                    if(v[i+1] <= v[i]){
                        return false;
                    }
                }
            }
            else{
                for(int i = 0; i < v.size(); i++){
                    if(v[i]%2 != 0){
                        return false;
                    }
                }
                for(int i = 0; i < v.size()-1; i++){
                    if(v[i+1] >= v[i]){
                        return false;
                    }
                }
            }
            level++;
        }
        return true;
    }
};