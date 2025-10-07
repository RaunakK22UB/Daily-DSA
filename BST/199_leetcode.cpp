class Solution {
public:
    void solve(TreeNode* root,int level,vector<int>&ans){
        //base case
        if(root == NULL) return ;

        if(level == ans.size()){   // this is the condition because of that we are able to take only 1st node from right view
        ans.push_back(root->val);

        }  
            solve(root->right,level+1,ans); // and calling the 1st right it will give right same for left
            solve(root->left,level+1,ans); 
            
    

    }
    vector<int> rightSideView(TreeNode* root) {
           vector<int>ans;
           solve(root,0,ans);
           return ans;
    }
};


//-----------BFS------------using level oder traversal



// vector<int> rightSideView(TreeNode* root) {
//            vector<int>ans;
//         //    solve(root,0,ans);
//         //    return ans;

//         // using level oder traversal

//         if(root == NULL ) return ans;

//         queue<TreeNode*>q;
//         q.push(root);
//         while(!q.empty()){
//             int n = q.size();
//             TreeNode* temp = NULL;
//             while(n--){
//                   temp = q.front();
//                   q.pop();

//                   if(temp->left !=NULL){
//                     q.push(temp->left);
//                   }
//                   if(temp->right !=NULL){
//                     q.push(temp->right);
//                   }
//             }
//              ans.push_back(temp->val);

//         }

//         return ans;
//     }
// };