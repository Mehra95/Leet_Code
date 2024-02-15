class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long sum=0;
        for(auto it:nums)
        sum+=it;
        int n=nums.size();
        for(int i=n-1;i>1;i--){
            if(sum-nums[i]>nums[i])
            return sum;
            else
            sum-=nums[i];
        }
        return -1;
    }
};