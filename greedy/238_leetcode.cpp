class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            int n = nums.size();
           
            
            vector<int>prefix(n);
            vector<int>suffix(n);
            prefix[0]=1;  // 0th index ke pichhe ka mul. to pata nahi hai
            // this will give us vector wich is having prefix multiplication of all the ith elment 
            for(int i =1;i<n;i++){
                prefix[i] = nums[i-1] * prefix[i-1];
            }

            suffix[n-1]=1; // n-1th index ke aage ka mul. to pata nahi hai
            for(int i =n-2;i>=0;i--){
                 suffix[i] = suffix[i+1] * nums[i+1]; 
                 // ye hum suffix yani ith element ke right side ka sara multiplication kar rahe hai
            }
            vector<int>result(n);
            // now just simply dono vectpor ko multipliy kar do
            for(int i =0;i<n;i++){
                result[i] = prefix[i] * suffix[i];
            }
            return result;
    }
};

// ----------------------------------early try with O(n^2) we want O(n)
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//             int n = nums.size();
           
//             vector<int>result(n);
//             for(int i =0;i<n;i++){
//                    int j = 0;
//                     int mul=1;
//                    while(j<n){
//                       if(j==i){
//                              j++;
//                             continue;
                            
//                       }
//                        mul *= nums[j];
//                         j++;
                      
//                    }
//                    result[i]=mul;

//             }
//             return result;
//     }
// };