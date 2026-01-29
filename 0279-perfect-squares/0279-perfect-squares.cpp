class Solution {
public:
    int solve(int n,vector<int>& dp){
        if(n==0){
            return 0;
        }

        if(dp[n]==-1){

            int mini=INT_MAX;
            for(int i=1;i*i<=n;i++){
                mini=min(mini,solve(n-(i*i),dp)+1);
            }
            dp[n]=mini;
        }
        
        
        return dp[n];
    }
    int numSquares(int n) {
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }

};