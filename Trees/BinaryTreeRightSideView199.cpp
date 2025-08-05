class Solution {
  public:
      vector<int> rightSideView(TreeNode* root) {
          ios_base::sync_with_stdio(false);
          cin.tie(0);cout.tie(0);
          vector<int> ans;
          if (!root)
              return ans;
  
          queue<TreeNode*> q;
          q.push(root);
  
          while (!q.empty()) {
              int s = q.size();
  
              for (int i = 0; i < s; ++i) {
                  TreeNode* curr = q.front();
                  q.pop();
  
                  if (i == 0) {
                      ans.push_back(curr->val);
                  }
  
                  if (curr->right)
                      q.push(curr->right);
                  if (curr->left)
                      q.push(curr->left);
              }
          }
          return ans;
      }
  };
////
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
// class Solution {
//   public:
//       vector<int> rightSideView(TreeNode* root) {
//         ios_base::sync_with_stdio(false);
//         cin.tie(0);cout.tie(0);
        
//         vector<int>ans;
//         if (!root) 
//           return ans;
//         queue<TreeNode*>q;
//         q.push(root);
//         while(!q.empty()){
//           int s = q.size();
//           bool first = true;
//           while(s--){
//             TreeNode* curr = q.front();
//             q.pop();
//             if(curr && first){
//               ans.push_back(curr->val);
//               first = false;
//             }
//             if(curr->right)q.push(curr->right);
//             if(curr->left)q.push(curr->left);
//           }
//         }
//         return ans;
//       }
//   };  