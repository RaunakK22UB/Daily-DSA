class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
           vector<int>vec(100,0); // why 100 size because of this constarints "1 <= dominoes[i][j] <= 9", our logic to solve this question is by converting each dominoes[0] elemnst in number by formula and this constatints is saying numbers can be from1 to 9 so upto 99 by formula numbers can be there thats why size 100
           // Formula a * 10 + b => [[a,b],[c,d]]
         int result = 0;
           for(auto d : dominoes){
              if(d[0] > d[1]){
                swap(d[0],d[1]);
              }
             int num = d[0] * 10 + d[1];
             result+=vec[num];  // add the frequency of that number , 1st 0 hi add hoga kyu ki uss num ke sath pair banane ke liye 2 chahiye iss liye

             vec[num]++;

           }

           return result ;
    }
};