class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
          int n = p.size();
          int m= t.size();

          int i=0;
          int j=0;
          sort(begin(p),end(p));
          sort(begin(t),end(t));
          int count=0;
          while(i <n && j < m){
              if(p[i] <= t[j]){
                   count++;
                   i++;
              }
              j++;

          }
          return count;
    }
};