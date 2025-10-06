
class Solution {
  public:
    vector<int> bottomView(Node *root) {
    
           vector<int> ans;
           
           if(root==NULL){
               
               return ans;
           }
           
           queue<pair<Node*,int>>q;
           
           map<int,int>mp;
           
           q.push({root,0});
           
           
           while(!q.empty()){
               
               pair<Node*,int> temp = q.front();
               q.pop();
               
               Node* N1 = temp.first;
               
               int hd = temp.second;
               
               mp[hd] = N1->data; // maped the hd to data
               
               if(N1->left){
                   q.push({N1->left, hd - 1});
               }
               
               if(N1->right){
                   q.push({N1->right, hd + 1});
               }
           }
           
           for( auto it : mp){
               ans.push_back(it.second);
           }
           
           return ans;
    }
};