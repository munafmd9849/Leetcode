// class Solution {
// public:

//     int lcs(string &a, string &b,int i, int j){

//         if(i<0 || j<0){
//             return 0;
//         }

//         if(a[i]==b[j]){
//             return 1+lcs(a,b,i-1,j-1);
//         }
//         else{
//             return max(lcs(a,b,i-1,j),lcs(a,b,i,j-1));
//         }

//     }
//     int longestCommonSubsequence(string text1, string text2) {
//         return lcs(text1,text2,text1.length()-1,text2.length()-1);
//     }
// };


// class Solution {
// public:
//     int longestCommonSubsequence(string a, string b) {
//         int m=a.length();
//         int n=b.length();

//         vector<vector<int>> dp(m,vector<int>(n));
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(a[i]==b[j]){
//                     if(i>0 && j>0){
//                         dp[i][j]=dp[i-1][j-1]+1;
//                     }
//                     else{
//                         dp[i][j]=1;
//                     }
//                 }else{
//                     int t1=0,t2=0;
//                     if(j>=1)
//                         t1=dp[i][j-1];
//                     if(i>=1)
//                         t2=dp[i-1][j];
//                     dp[i][j]=max(t1,t2);
//                 }
//             }
//         }
//         return dp[m-1][n-1];
//     }
// };


class Solution {
public:
    int longestCommonSubsequence(string a, string b) {
        int m=a.length();
        int n=b.length();

        vector<vector<int>> dp(2,vector<int>(n+1,0));
        for(int i=1;i<=m;i++){
            int cur=i%2;
            int prev=1-cur;
            for(int j=1;j<=n;j++){
                if(a[i-1]==b[j-1]){
                    dp[cur][j]= 1+dp[prev][j - 1];
                }else{
                    dp[cur][j]=max(dp[prev][j],dp[cur][j-1]);
                }
            }
        }
        return dp[m%2][n];
    }
};