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
      bool sameTree(TreeNode* node1, TreeNode* node2){
        if(node1 == nullptr || node2 == nullptr)
          return node1 == node2;
        return (node1->val==node2->val) && (sameTree(node1->left,node2->left)&&sameTree(node1->right,node2->right));
      }
      bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        
        if(sameTree(root,subRoot))
          return true;
        bool left=false,right=false;
        if(root->left)
          left = isSubtree(root->left,subRoot);
        if(root->right)
          right =isSubtree(root->right,subRoot);
        return left||right;   
      }
  };