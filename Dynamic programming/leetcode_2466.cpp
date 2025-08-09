class Solution {
public:
// to solve this question we can use empty string and start with to , but it will be quit messy , becuase add on string then remove it , and so on.... so we took the integer instead , we can say length of tht string using length of string we can work at 1st send 0 as length of the string .

    const int M = 1e9 + 7;

    int solve (int len,int low, int high, int zero, int one,vector<int>&dp){
        //base case
        if(len > high) {// agar lemght hogh is hi bada hogaya to vo  good string ho hi nahi payega
               return 0;
        }   
       
       //----------------------memoization
        if(dp[len] !=-1){
            return dp[len];
        }

       // ab hum check karenge ki kya hum string ko good kahenge ya nahi
        bool isGood = false;
        if(len >= low &&len <= high ){
              isGood=true;      // is string ko add kar skate hai 
        } 


        int add_one =solve(len+one,low,high,zero,one,dp);  // so we will add number of ones to given (string)to lenght
        int add_zero=solve(len+zero,low,high,zero,one,dp); // so we will add number of zeroes to given(string) to lenght


        return dp[len]=(isGood +add_one + add_zero)%M ; // add all the possible number of good string , DONT FORGET TO ADD "isGood" if ture then add 1 if false add 0
    }




    int countGoodStrings(int low, int high, int zero, int one) {

        // only length changing that's why 1D vector
          vector<int>dp(100001,-1);
            return solve(0,low,high,zero,one,dp); // 0 is the lenght of string we are having at start which is empty 

    }
};