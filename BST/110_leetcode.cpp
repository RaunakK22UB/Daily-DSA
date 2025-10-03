class Solution {
public:
  int func(TreeNode* root){
    if(root == 0) return 0;
    int left = func(root->left);
    int right= func(root->right);

    return max(left,right)+1;
  }
    bool isBalanced(TreeNode* root) {
    if(root==NULL) return true;
    int left = func(root->left);
    int right =func(root->right);

    return (abs(left - right)<= 1 && isBalanced(root->left) && isBalanced(root->right));
        
    



    }
};