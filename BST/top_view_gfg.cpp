class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        vector<int>ans;
        
        if(root ==NULL) return ans;
        
        map<int,int>mp;   // -------map of< HD , node->value >
        queue<pair<Node*,int>>q;
        q.push({root,0}); // why 0 horizontal distance of root is 0
        
        while(!q.empty()){
            
           pair<Node*,int> temp= q.front();  // temp is a piar which is having the data of each queue
        
           q.pop();
        
           Node* N1 = temp.first;  // to store the node we create the N1 node
           
           int hd = temp.second; // to store the HD of each node
          
           if( mp.find(hd) ==mp.end() ){  // find karo ye hd hai kya , agar nahi hai to
           
                 mp[hd]= N1->data;  // we mapped the node and data
               
           }
           
           if(N1->left){   // agar node N1 ka left hai to
               q.push({N1->left,hd - 1}); // why hd - 1 because we are moving left so 0 -1 -2 we will get
           }
           
           if(N1-> right){  // agar N1 node ka right hai to
               q.push({N1->right , hd+1});
           }
        }
        
        
        for(auto it : mp){
            ans.push_back(it.second);
        }
        
        return ans;
    }