class Solution {
public:

     TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int start , int end , int &idx){ // wby reffrence for idx we need not to change the value of idx everytime
       
        if(start > end) return NULL;

        int rootVal= preorder[idx];
        idx++;

        // find this root in inorder
        int i = start;// bahar kyu likha hai kyu ki we will use this i in calling solve, other wise it will be block level
        for(; i<=end ; i++){
              if(inorder[i] == rootVal){
                   break;
              }
        }

        TreeNode* root = new TreeNode(rootVal);

        root->left=solve(preorder,inorder,start,i-1,idx);
        root->right=solve(preorder,inorder,i+1,end,idx);

        return root;
        
     }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        int n = preorder.size();

        int idx = 0;

        return solve(preorder,inorder,0,n-1,idx);
        
    }
};