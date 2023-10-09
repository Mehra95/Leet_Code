class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        vector<int>ans(2,-1);
        while(left<=right){
            if(ans[0]==-1) 
                if(nums[left]==target)
                    ans[0]=left;
            if(ans[1]==-1)
                if(nums[right]==target)
                    ans[1]=right;
            if(ans[0]!=-1 && ans[1]!=-1)
                break;
            if(ans[0]==-1)
                left++;
            if(ans[1]==-1)
                right--;
        }
        return ans;
    }
};