class Solution {
    int dp[1001][1001];
private:
    int ispalindrome(int i,int j,string s){
        if(dp[i][j]!=-1)
        return dp[i][j];

        while(i<j){
            if(s[i]!=s[j])
            return dp[i][j]=0;
            else{
                i++;
                j--;
            }
        }
        return dp[i][j]=1;
    }
public:
    int countSubstrings(string s) {
        int count=0;
       
        int n=s.size();
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                count+=ispalindrome(i,j,s);
            }
        }
        return count;
    }
};