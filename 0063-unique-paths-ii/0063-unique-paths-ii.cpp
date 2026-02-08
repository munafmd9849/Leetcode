class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> dp(2,vector<int>(n,0));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(obstacleGrid[i][j]==1){
                    dp[i%2][j]=0;
                }
                else if(i==0 && j==0){
                    dp[i][j]=1;
                }
                else if(i==0){
                    dp[i][j]=dp[i][j-1];
                }
                else if(j==0){
                    dp[i%2][j]=dp[(i-1)%2][j];
                }
                else{
                    dp[i%2][j]=dp[(i-1)%2][j]+dp[i%2][j-1];
                }
            }
        }
        return dp[(m-1)%2][n-1];
    }
};