class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(2,vector<int>(n,-1));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){

                if(i==0 && j==0){
                    dp[i][j]=grid[i][j];
                }
                else if(i==0){
                    dp[i][j]=dp[i][j-1]+grid[i][j];
                }
                else if(j==0){
                    dp[i%2][j]=dp[(i-1)%2][j]+grid[i][j];
                }
                else{
                    dp[i%2][j]=min(dp[(i-1)%2][j],dp[i%2][j-1])+grid[i][j];
                }
            }
        }
        return dp[(m-1)%2][n-1];
    }
};