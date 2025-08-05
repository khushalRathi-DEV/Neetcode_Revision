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
      int checkHeight(TreeNode* node){
        if(node == nullptr)
          return 0;
        int left = checkHeight(node->left);
        if(left == -1)
          return -1;
        int right = checkHeight(node->right);
        if(right == -1)
          return -1;
        if(abs(right-left) > 1)
          return -1;
        return 1 + max(left,right);
      }
      bool isBalanced(TreeNode* root) {
        // if(root == nullptr)
        //   return true;
        // bool l=true,r=true;
        // if(root->left)   
        //   l = isBalanced(root->left);
        // if(root->right)
        //   r = isBalanced(root->right);
        if(checkHeight(root) == -1)
          return false;
        return true;
      }
  };