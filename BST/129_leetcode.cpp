class Solution {
public:
    int solve(TreeNode *root , int curr){
          if(root == NULL){
                return 0;
          }
        curr = (curr * 10 ) + root->val ;  
        // this means we reached leaf node we so we will return the current value only
        if( root->left == NULL && root->right == NULL){
            return curr;
        }

        // if not leafnode then 

        int l =  solve(root->left , curr);
        int r =  solve(root->right, curr);


        return l + r;
    }
    int sumNumbers(TreeNode* root) {
        int current = 0;
         return solve(root,current);
    }
};