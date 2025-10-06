class Solution {
public:

    bool solve(TreeNode* l , TreeNode* r){

        // base case
        if(l ==  NULL && r == NULL){
            return true;
        }

        if(l==NULL || r == NULL){
            return false;
        }

        if(l->val == r->val && solve(l->left ,r->right ) && solve(l->right,r->left)){
              return true;
        }

        return false;
    }
    bool isSymmetric(TreeNode* root) {
        

        if(root == NULL)  return true;

        return solve(root->left, root->right);
    }
};