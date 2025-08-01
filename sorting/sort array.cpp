class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
          int maxE = *max_element(begin(nums),end(nums));
          int minE =*min_element(begin(nums),end(nums));
          unordered_map<int ,int>mp;
          for(auto it : nums){
              mp[it]++;
          }
           int j=0;
          for(int i =minE ; i<=maxE;i++){
               while(mp[i]>0){    // chcecking if that element is present in mp , then frequency will be greter then 0
                   nums[j] = i;  // in nums we are saving the element putting the i only 
                   j++;
                   mp[i]--; // decreasing the fequency of the elemenet because some elements can be multiple time thats why 
               }
          }

          return nums;
    }
};