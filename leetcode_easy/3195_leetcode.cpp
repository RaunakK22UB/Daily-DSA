class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
           int m = grid.size();
           int n =grid[0].size();
           int minRow=m;
           int maxRow=-1;
           int minCol=n;
           int maxCol=-1;
           for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){ // 1 hi kyu kyu ki 1 ko hi rectangle me lena tha
                      minRow = min(minRow,i);// yaha pe humne sbse pahale 1 dekh liya ab yaha se kaha tak maxRow tak humara width hojayega 
                      maxRow = max(maxRow,i);// upaar se ye niche tak mtlb ye maxRow tak hummar wedith hogaya

                      minCol=min(minCol,j); // yaha se leke maxCol tak length aa jayega ki length ky hai

                      maxCol=max(maxCol,j);// maxCol tak length ,, minCol<---------------->maxCol tak


                }
            }
           }


           return ( maxRow - minRow + 1) * (maxCol - minCol + 1);  // Length * bredth , why +1 because index starts from 0
    }
};