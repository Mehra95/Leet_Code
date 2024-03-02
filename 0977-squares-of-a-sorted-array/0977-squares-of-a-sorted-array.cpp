class Solution {
public:
vector<int> sortedSquares(vector<int>& nums) {
    vector<int>ds;
    int n=nums.size();
    for(int i=0;i<n;i++)
        if(nums[i]>=0)
            ds.push_back(nums[i]*nums[i]);
        else
        {nums[i]=abs(nums[i]);
         ds.push_back(nums[i]*nums[i]);
        }
    sort(ds.begin(),ds.end());
            return ds;
}
};