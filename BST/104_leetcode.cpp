class Solution {
public:
    int maxDepth(TreeNode* node) {
        if(node ==0)return 0;
       int  left =maxDepth(node->left);
       int  right=maxDepth(node->right);

        return max(left,right)+1;
    }
};