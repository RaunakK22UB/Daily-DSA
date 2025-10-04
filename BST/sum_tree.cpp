class Solution {
  public:
     
    int addition(Node* root){
        
        // base case
        
        if( root== NULL) return 0;
        
        int left = addition(root->left);
        int right = addition(root->right);
        
        return root->data + left + right ;
    }
    bool isSumTree(Node* root) {
        // Your code here
        
        //2 base cases
        if(root == NULL ) return true;
        if(root->left == NULL && root->right == NULL) return true;
        
        
        // now for not null
        if( root->left !=NULL || root->right != NULL){
              if(root->data != addition(root->left) + addition(root->right)){
                  return false;
              }
        }
        
        
        // recursivly we have to do this for each and evry node
        
        return isSumTree(root->left) && isSumTree(root->right);
        
        
    }
};