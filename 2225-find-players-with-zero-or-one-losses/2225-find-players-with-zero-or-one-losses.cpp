class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>ans;
        map<int,int>mp;
        for(auto m:matches){
            if(!mp.count(m[0])) mp[m[0]]=0;
            mp[m[1]]++;
        }
        vector<int>temp1,temp2;
        for(auto it:mp){
            if(it.second==0)
            temp1.push_back(it.first);
            if(it.second==1)
            temp2.push_back(it.first);
        }
        return {temp1,temp2};
    }
};