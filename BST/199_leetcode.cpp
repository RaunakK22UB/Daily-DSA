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