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
      int ans = INT_MIN;
      int checkHeight(TreeNode* node){
        if(node == nullptr)
          return 0;
        int left = checkHeight(node->left);
        int right = checkHeight(node->right);
        ans = max(ans,left+right);
        return max(left,right)+1;
      }   
      int diameterOfBinaryTree(TreeNode* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);  
        checkHeight(root);
        return ans;
      }
  };