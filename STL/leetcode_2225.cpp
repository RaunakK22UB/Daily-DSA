class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
             int n = matches.size();
             unordered_map<int,int>mp;
             for(int i=0;i<n;i++){
                   int lost = matches[i][1];

                   mp[lost]++; 
             }

             vector<int>neverLost;
             vector<int>lostOnce;

             for(int i=0;i<n;i++){
                 int winner = matches[i][0];
                 int losser = matches[i][1];
                if(mp.find(winner) == mp.end()){   // agar iss me milgaya to vo losser hai vo to fir we can get from losser variable
                        neverLost.push_back(winner);
                        mp[winner]=2;   // so we will not take this again if it comes again
                }
                if(mp[losser] == 1){
                              lostOnce.push_back(losser);
                }
             }

             sort(begin(neverLost),end(neverLost));
             sort(begin(lostOnce),end(lostOnce));

             return {neverLost , lostOnce};
    }
};