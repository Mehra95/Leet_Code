class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n);
        stack<pair<int, int>> stk;
        for (int i = n - 1; i >= 0; i--) {
            while (!stk.empty() && temperatures[i] >= stk.top().first) {
                stk.pop();
            }
            ans[i] = stk.empty() ? 0 : stk.top().second - i;
            stk.push({temperatures[i], i});
        }
        return ans;
    }
};
