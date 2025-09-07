class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans(n);
        
        if(n%2==0){
            int num=1;
            for(int i=0;i<n;i+=2){
                   ans[i]=num;
                   ans[i+1]= -num;
                   num++;
            }
        }
        else{
            int num=1;
            ans[n-1] = 0;
            for(int i=0;i<n-1;i+=2){
                   ans[i]=num;
                   ans[i+1]= -num;
                   num++;
            }
        }

        return ans;
    }
};