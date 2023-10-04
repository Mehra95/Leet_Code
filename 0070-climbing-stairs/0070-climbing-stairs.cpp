class Solution {
    int helper(int ind,int dp[]){
        if(ind==0)
        return 1;
        if(ind==1)
        return 1;

        if(dp[ind]!=-1)
        return dp[ind];

        int l=helper(ind-1,dp);
        int r=helper(ind-2,dp);
        return dp[ind]=l+r;
    }
public:
    int climbStairs(int n) {
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        return helper(n,dp);
    }
};