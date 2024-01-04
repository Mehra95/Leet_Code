class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        int count=0;
        for(auto it:mp){
            if(it.second==1)return -1;

            int occr=it.second;
            if(occr%3==0)
            count+=occr/3;
            else
              count+=occr/3+1;
                    
            }
            return count;
           }
    
};