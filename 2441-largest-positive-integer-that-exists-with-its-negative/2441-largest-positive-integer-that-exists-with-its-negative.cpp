class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int>st;
        for(auto it:nums){
            st.insert(it);
        }
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>0 && st.find(-nums[i])!=st.end())
                return nums[i];
        }
        return -1;
    }
};