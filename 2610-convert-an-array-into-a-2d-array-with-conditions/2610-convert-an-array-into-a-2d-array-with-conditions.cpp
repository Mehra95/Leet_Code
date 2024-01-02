class Solution {
public:
   vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<vector<int>> ans;

        for (auto it : nums) {
            mp[it]++;
        }

        while (!mp.empty()) {
            vector<int> temp;
            for (auto it = mp.begin(); it != mp.end();) {
                temp.push_back(it->first);
                it->second--;

                if (it->second == 0) {
                    it = mp.erase(it);  
                } else {
                    ++it;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};