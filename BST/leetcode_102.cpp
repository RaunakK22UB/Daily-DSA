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
    vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ans;   
    vector<int>eachLevel;
    queue<TreeNode*>q;
    if(root==NULL) return ans;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
	      TreeNode* temp = q.front();
	      q.pop();
	      
	      if(temp == NULL){
		  ans.push_back(eachLevel); // means this level is doen we will move to next level
          eachLevel.clear(); // for that clear the data insead this vector
	      	   if(!q.empty()){
	      	   	    q.push(NULL);
				}
		  }
		  else{
            eachLevel.push_back(temp->val); // collect the data members in that level
		  	if(temp->left){
	      	q.push(temp->left);
		  }
		  if(temp->right){
		  	q.push(temp->right);
		  }
		  	
		  }
	      
	}