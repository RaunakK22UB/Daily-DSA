class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        unordered_map<int , pair<int,int>>xtoMinMaxY;
        unordered_map<int, pair<int,int>>ytoMinMaxX;

        for(auto building : buildings){
              int x = building[0];
              int y = building[1];

              if(!xtoMinMaxY.count(x)){
                  xtoMinMaxY[x]={INT_MAX ,INT_MIN};
              }
              if(!ytoMinMaxX.count(y)){
                  ytoMinMaxX[y]={INT_MAX,INT_MIN};
              }

              xtoMinMaxY[x].first = min(xtoMinMaxY[x].first , y);
              xtoMinMaxY[x].second = max(xtoMinMaxY[x].second , y);


              ytoMinMaxX[y].first = min(ytoMinMaxX[y].first , x);
              ytoMinMaxX[y].second = max(ytoMinMaxX[y].second , x);

        }

        int result =0;

        for(auto building : buildings){
              int x = building[0];
              int y = building[1];

              auto pairOfX = xtoMinMaxY[x];
              auto pairOfY = ytoMinMaxX[y];

               
              // pairOfX.first is what it is min y jo x ko upar se dhakega
              // pairOfX.second is what it is max y jo x ko niche se dhakega
              // same for pairOfY
              if(pairOfX.first < y && y < pairOfX.second && pairOfY.first < x && x < pairOfY.second ){
                     // kya x or y min of x max y same for x ke range me aa rahe hai ya nahi 
                     // if aa rahe hai to result ++;

                     result++;
              }
        }

        return result ;
    }
};