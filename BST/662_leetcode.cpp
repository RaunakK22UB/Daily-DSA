class Solution {
public:
    typedef unsigned long long ll;
    int widthOfBinaryTree(TreeNode* root) {

           if(root == NULL) return 0;
            queue<pair<TreeNode* , ll>>q;
            q.push({root , 0}); // in queue we are storing the the the cuurent and the index of that  formula for index is (2*curr) + 1;
            ll maxwidth = 0;
            while(!q.empty()){
                      int n = q.size(); // iss level me kitne node hai
                // what hjapping here we are finding the maxwidth for each level
                
                ll L = q.front().second ;
                ll R = q.back().second ;

                maxwidth = max(maxwidth , R-L+1);
                

                while(n--){   // what this while is doing this while actully filling the queue for each level 
                    TreeNode* curr = q.front().first;
                    ll idx = q.front().second;
                    q.pop();
                     if(curr->left){
                        q.push({curr->left , 2 * idx + 1});
                     }
                     if(curr->right){
                        q.push({curr->right , 2 * idx + 2});
                     }
                }

            }

            return maxwidth;
    }
};