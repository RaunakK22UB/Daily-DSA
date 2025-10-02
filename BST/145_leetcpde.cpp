class Solution {
public:
    void solve(vector<int>&ans , TreeNode* root){
                 //Base case
                 if(root==NULL) return ;

                 //LRN;
                 //L
                 solve(ans,root->left);
                 //R
                 solve(ans,root->right);
                 //N
                 ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL) return ans;
        solve(ans,root);
        return ans;
    }
};