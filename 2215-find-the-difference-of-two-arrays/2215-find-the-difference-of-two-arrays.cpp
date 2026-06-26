class Solution {
public:
    vector<int> func(vector<int> nums1, vector<int> nums2){
            vector<int>temp;
            vector<int>num;

            unordered_map<int,int>mp;
            set<int>st;
            for( auto it : nums2){
                mp[it]++;
            }
            for( auto it : nums1){
                 st.insert(it);
            }
            for( auto it : st){
                 num.push_back(it);
            }
            for(int i =0;i <num.size(); i++){
                    if(mp.count(num[i])==0 ){
                           temp.push_back(num[i]);
                    }
            }


            return temp;
    }
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;  
        vector<int>temp;
         temp = func(nums1,nums2);
         ans.push_back(temp);
         temp.clear();
         temp = func(nums2,nums1);
         ans.push_back(temp);

         return ans;
            
    }
};