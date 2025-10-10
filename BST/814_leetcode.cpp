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
    bool OnePresent(TreeNode* root){
        if(root==NULL){
            return false;
        }
        if(root->val == 1){
            return true;
        }
       
        return  OnePresent(root->left) || OnePresent(root->right); // for that node if both are false then we have to remove that root node thats why or oprator || 
    }
    TreeNode* pruneTree(TreeNode* root) {
           if(root == NULL) return NULL;

           if(!OnePresent(root->left)){
                   root->left = NULL;
           }

           if(!OnePresent(root->right)){
             root->right=NULL;
           }

           pruneTree(root->left);
           pruneTree(root->right);
           if(root->left ==NULL && root->right == NULL && root->val == 0){   // this condition is to check if one root is there and and it is 0 then taht single root should also not be returend do dry run for single node with value 1 and 0
                     return NULL;
           }

           return root;
    }
};