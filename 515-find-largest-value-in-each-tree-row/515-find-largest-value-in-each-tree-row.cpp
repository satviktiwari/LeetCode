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
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        if(!root){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>t;
            int sz = q.size();
            for(int i = 0; i < sz; i++){
                TreeNode* temp = q.front();
                q.pop();
                t.push_back(temp->val);
                if(temp -> left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            int mx = INT_MIN;
            for(int i = 0; i < t.size(); i++){
                mx = max(mx, t[i]);
            }
            ans.push_back(mx);
        }
        return ans;
    }
};