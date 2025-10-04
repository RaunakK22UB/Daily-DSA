class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        
        queue<TreeNode*>q;
        vector<vector<int>>result;

        if(root== NULL) return result;  // root is empty only


        q.push(root);  // sytarting Left to Right
        bool leftToright = true; // thats why true

        while(!q.empty()){
            int size = q.size();
            vector<int>ans(size);
          
            for(int i=0;i<size;i++){
                TreeNode* temp = q.front();
                q.pop();

                int index = leftToright ? i : size - i - 1;
                ans[index] = temp->val;

                if(temp->left){
                   q.push( temp->left );
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }

            leftToright = !leftToright ;  // abhi hum L to R gaye the abb R to L jayenge

            
                result.push_back(ans);
            
        }

        return result ;
    }
};