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
      int ans = 0;
      void dfs(TreeNode* node,int maxi){ 
        if(node == nullptr)
          return;
        if(node->val >= maxi)
          ans++;
        dfs(node->left,max(maxi,node->val));
        dfs(node->right,max(maxi,node->val));
      }
      int goodNodes(TreeNode* root) {
      ios_base::sync_with_stdio(false);
      cin.tie(0);cout.tie(0);
      dfs(root,INT_MIN);
      return ans;
      }
  };