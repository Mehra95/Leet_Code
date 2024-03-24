class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int arr[n+1];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
        }

        for(int i=0;i<n+1;i++){
            if(arr[i]>=2)
                return i;
        }
        return 0;
    }
};