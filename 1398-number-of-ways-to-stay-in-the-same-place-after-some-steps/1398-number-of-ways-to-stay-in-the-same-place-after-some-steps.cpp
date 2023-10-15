class Solution {
private:
    static const long long int MOD = 1e9 + 7;

    long long int helper(int index, int steps, int n, vector<vector<long long int>>& dp) {
        if(index == 0 && steps == 0) {
            return 1;
        }
        if(index < 0 || steps < 0 || index > n-1) {
            return 0;
        }
        if (dp[index][steps] != -1) return dp[index][steps];
        
        long long int f = helper(index+1, steps-1, n, dp) % MOD;
        long long int r = helper(index, steps-1, n, dp) % MOD;
        long long int s = helper(index-1, steps-1, n, dp) % MOD;

        return dp[index][steps] = (f + r + s) % MOD;
    }

public:
    int numWays(int steps, int arrLen) {
        arrLen = min(steps / 2 + 1, arrLen);
        vector<vector<long long int>> dp(arrLen, vector<long long int>(steps + 1, -1));
        return helper(0, steps, arrLen, dp);
    }
};
