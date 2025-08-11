class Solution {
public:
    int maximumProduct(vector<int>& nums) {
           int n = nums.size();
           sort(begin(nums),end(nums));
           int opt1=nums[0]*nums[1]*nums[n-1];
           int opt2=nums[n-1]*nums[n-2]*nums[n-3];

           return max(opt1,opt2);
    }
};