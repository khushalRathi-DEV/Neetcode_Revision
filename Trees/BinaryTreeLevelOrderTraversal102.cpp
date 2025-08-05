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
      vector<vector<int>> levelOrder(TreeNode* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        
        if(root == nullptr)
          return {};
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
       while(!q.empty()){
        int s = q.size();
        vector<int>temp;
        while(s--){
          TreeNode* curr = q.front();
          q.pop();
          if(curr == nullptr)
            continue;
          temp.push_back(curr->val);
          if(curr->left)q.push(curr->left);
          if(curr->right)q.push(curr->right);
        }
        ans.push_back(temp);
       }
      return ans;
      }
  };