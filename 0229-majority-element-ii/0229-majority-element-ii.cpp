class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>umap;
        int size=nums.size();
        for(int i=0;i<size;i++){
            umap[nums[i]]++;
        }

        int freq=size/3;
        vector<int>ans;
        for(auto it:umap){
            if(it.second>freq){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};