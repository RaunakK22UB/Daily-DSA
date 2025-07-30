class Solution {
public:
  //we ahave to find the number of 1 bits for each index of array of size n + 1
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        if(n==0) return ans;

        ans[0]=0; // number 0 have 0 1 bits in it
// this logic if you will write each number in bits you will find a relation
//--------------even
// 2 -> 10   4-> 100  half of 4 is 2 so if number is even then it's half that number will be also same number og 1 bits
//--------------------odd
//3->11  7->111  half of 7 is 3 then it will be having  3's 1 bits count + 1 that is 3
// so logic ix that we will find the bits from previous number because we know the value of 0 which is 0

        for(int i=1;i<=n;i++){
             if(i%2!=0){
                ans[i] =ans[i/2] + 1;
             }else{
                    ans[i]=ans[i/2];
             }
        }
        return ans;
    }
};