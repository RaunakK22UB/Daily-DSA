class Solution {
public:
     void solve(vector<int> &ans , TreeNode * root){
          // Base case
          if(root == NULL) return ;

          //NLR
          //N
          ans.push_back(root->val);
          //L
          solve(ans,root->left);
          //R
          solve(ans,root->right);
          
     }
    vector<int> preorderTraversal(TreeNode* root) {
          
        vector<int> ans;
        if( root == NULL ) return ans;
        solve(ans,root);
        return ans;

    }
};