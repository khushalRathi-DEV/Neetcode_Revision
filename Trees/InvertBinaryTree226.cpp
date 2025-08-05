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
      TreeNode* invertTree(TreeNode* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        
        if(root == nullptr)
          return nullptr;
        if(root->left && root->right)
          swap(root->left,root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
      }
  };