class Solution {
public:
    int n , m ,l;
    vector<vector<int>>direction={{0,1},{0,-1},{1,0},{-1,0}};
    bool find(vector<vector<char>>& board, int i ,int j,string& word, int idx){
          
        // base condition  
        if(idx>=l){  // mtlab hume sab char mil gaye hai 
             return true;
        }

        // validation checks 
        if(i<0 || j<0 || i>=m || j>=n || board[i][j]!=word[idx] ){
                 return false;
        }

      
     char temp =board[i][j] ;
          board[i][j] ='$';
 

         // this for loop for checking all the directions
        for(auto &dir : direction){
            int new_i = i + dir[0];
            int new_j = j + dir[1];

            if(find(board, new_i,new_j,word,idx+1)){   // checking is that perticular char is there or not ?
                board[i][j]=temp;
                return true;
            }
        }
         board[i][j]=temp;
         return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
           m = board.size();
            n = board[0].size();
            l = word.length();

            if(m*n < l){
                return false;
            }

           for(int i=0;i<m;i++){
              for(int j=0;j<n;j++){
                //ye if ka kam hai 1st element ko match karwa le uss ke bad find ka kam hai baki ko dhundh ke bataye
                    if(board[i][j]==word[0] && find(board,i,j,word,0)){
                          return true;
                    }
              }
           }

           return false;
    }

    
};