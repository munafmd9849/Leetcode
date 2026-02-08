class Solution {
public:
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(2,vector<int>(n,-1));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0){
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
















// class Solution {
// public:
    
//     int uniquePaths(int m, int n) {
//         vector<vector<int>> dp(m,vector<int>(n,-1));
        
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(i==0 && j==0){
//                     dp[i][j]=1;
//                 }
//                 else if(i==0){
//                     dp[i][j]=dp[i][j-1];
//                 }
//                 else if(j==0){
//                     dp[i][j]=dp[i-1][j];
//                 }
//                 else{
//                     dp[i][j]=dp[i-1][j]+dp[i][j-1];
//                 }
//             }
//         }
//         return dp[m-1][n-1];
//     }
// };



// class Solution {
// public:
//     int ways(int i,int j, vector<vector<int>> &dp){
//         if(i==0 && j==0){
//             return 1;
//         }
//         if(i<0){
//             return 0;
//         }
//         if(j<0){
//             return 0;
//         }

//         if(dp[i][j]==-1){

//             dp[i][j]=ways(i-1,j,dp)+ways(i,j-1,dp);
//         }
//         return dp[i][j];

//     }
//     int uniquePaths(int m, int n) {
//         vector<vector<int>> dp(m,vector<int>(n,-1));
//         return ways(m-1,n-1,dp);
//     }
// };