class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // int kamai = accumulate(begin(gas),end(gas));
        // int kharcha = accumulate(begin(cost),end(cost));
        int kamai =0;
        int kharcha=0;
        int n = gas.size();
        for(int i=0;i<n;i++){
              kamai+=gas[i];
              kharcha+=cost[i];
        }

        if(kamai < kharcha){
            return -1;
        }
        int total =0;
        int result_ka_index=0;

        for(int i=0;i<n;i++){
              total += gas[i] - cost[i];  // we will take one index and for that we will find the total , if in any point total < 0 then we will change result_ka_index and set total to 0
              if(total < 0){
                  total =0;
                  result_ka_index=i+1; //current idx i to nahi hai sayad aage wala ho answer isliye i+1
      