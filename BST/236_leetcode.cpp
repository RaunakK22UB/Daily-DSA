class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
           if(root == NULL) return NULL;

           if(root == p ||root == q){   // jab left ya right call hoga to hume ye check kar rahe hai ki iss root ke root->left jo ya root likha hai vo equal hai kya p se ya q se to hum return kar denge iss ke root ko ki app ke left se mil gaya p ya q 
               return root;
           }

           TreeNode* leftNode = lowestCommonAncestor(root->left , p , q);
           TreeNode* rightNode = lowestCommonAncestor(root->right , p , q);


           if(leftNode !=NULL && rightNode !=NULL){
                  return root; // hume left se p milgaya aur q bhi mil gaya to ancestor uska root hi hoga
           }


           if(leftNode!=NULL){
                 return leftNode ; // this the case where p is above node of q in the left of main root 1st example ke liye p=5,q=4 so for 3 node we will get the p but for its right nothinh NULL so we will return leftNode we gor vice versa , because   lowest common ancestor for q=4 is 5 only wich is our leftNode;
           }

          return rightNode ; // agar leftNode bhi nahi hai to right hoga upar wale if cond^n ka vice versa hai

    }
};