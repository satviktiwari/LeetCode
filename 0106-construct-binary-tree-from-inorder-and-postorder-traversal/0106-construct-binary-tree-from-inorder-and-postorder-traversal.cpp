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
    TreeNode* solve(vector<int>&inorder, int x, int y, vector<int>&postorder, int a, int b){
  if(x > y || a > b){
    return NULL;
  }
  TreeNode* node = new TreeNode(postorder[b]);
  int temp = x;
  while(node -> val != inorder[temp]){
    temp++;
  }
  node -> left = solve(inorder, x, temp-1, postorder, a, a+temp-x-1);
  node -> right = solve(inorder, temp+1, y, postorder, a+temp-x, b-1);
  return node;
}

TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder){
  return solve(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1);  
}
};