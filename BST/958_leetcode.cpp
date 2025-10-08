class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
          if(root == NULL) return true;

          queue<TreeNode*>q;
          q.push(root);
          bool past = false;
          while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp == NULL) {
                 past = true;
            }else{
                  if(past == true){
                       return false;
                  }

            q.push(temp->left);
            q.push(temp->right);
            }
          }

          return past;
    }
};

class Solution {
public:
//--------------------------------------------------using DFS or preorder
    int totalNodes(TreeNode* root){
            if(root == NULL) return 0;

            return 1 + totalNodes(root->left) + totalNodes(root->right);
    }
    bool solve(TreeNode * root , int idx , int totalNode ){
        if(root == NULL) return true;

        if( idx > totalNode) return false; // jaha idx jada hua totalNode se to return bhai false

        return solve(root->left, 2*idx,totalNode) && solve(root->right,2*idx+1,totalNode);
        // this are traversing the left and right and chceking the base condition 
    }
    bool isCompleteTree(TreeNode* root) {
          
          if(root == NULL) return true;

          int totalNode = totalNodes(root);

          int idx = 1; // index starts form 1 for the binary tree for left 2 * i and for right [2 * i + 1] index for any node   , by this we can create the array from a binary tree tree do dry run for non complete binary tree you will get index more then number of nodes , because there will be one node will be null

          return solve(root , idx, totalNode);


    }
};