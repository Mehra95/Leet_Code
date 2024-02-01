class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0,j=2;i<nums.size();){
            vector<int>temp;
            if(nums[j]-nums[i]<=k)
            {
                for(int k=i;k<=j;k++)
                temp.push_back(nums[k]);
                ans.push_back(temp);
                i=i+3;
                j=j+3;
            }
            else
            return {};
        }
        return ans;
    }
};