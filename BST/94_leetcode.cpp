class Solution {
public:
    void solve(vector<int>&ans,TreeNode* root){

        //Base Case
        if(root==NULL) return ;
        
        //LNR

           //L
           solve(ans,root->left);
           //N
           ans.push_back(root->val);
           //R
           solve(ans,root->right);


    }
    vector<int> inorderTraversal(TreeNode* root) {
           vector<int> ans;
           solve(ans,root);
           return ans;

    }
};