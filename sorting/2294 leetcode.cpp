class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n = nums.size();
        sort(begin(nums),end(nums));
        int minVal = nums[0];
        int count =1;
        for(int i=0;i<n;i++){
            if(abs(minVal - nums[i]) > k){
                  count++;
                  minVal=nums[i];
            }
        }
        return count ;
    }
};