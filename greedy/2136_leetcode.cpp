class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
             int n = plantTime.size();

             vector<pair<int,int>>vec(n);

             for(int i=0;i<n;i++){
                 vec[i] = {plantTime[i],growTime[i]};
                  // we are making a single container where we can put both planting time and growing time of P1 at one place so we can work effecently
             }

             // sorting decending order on the basis of which plant take more time to grow(growTime)
             auto lambda=[](pair<int,int>p1,pair<int,int>p2){

                   return p1.second > p2.second;
 
             };
             sort(begin(vec),end(vec),lambda);

              int prevPlantTime =0;
             int maxBloomTime = 0;
      