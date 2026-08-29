// class Solution {
// public:
//     int fun(string s1,string s2,int i,int j){
//         if(i<0){
//             return j+1;
//         }
//         if(j<0){
//             return i+1;
//         }
//         if(s1[i]==s2[j]){
//             return fun(s1,s2,i-1,j-1);
//         }else{
//             return 1+ min(
//                 min(fun(s1,s2,i-1,j),fun(s1,s2,i,j-1)),fun(s1,s2,i-1,j-1)
//             );
//         }
        

//     }


//     int minDistance(string word1, string word2) {
//         return fun(word1,word2,word1.length(),word2.length());
//     }
// };

class Solution {
public:

    int minDistance(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        if(n == 0) return m;
        if(m == 0) return n;
        vector<vector<int>>dp(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(word1[i]==word2[j]){
                    int t;
                    if(i==0){
                        t=j;
                    }else if(j==0){
                        t=i;
                    }else{
                        t=dp[i-1][j-1];
                    }
                    dp[i][j]=t;
                }else{
                    int a=0,b=0,c=0;
                    if(j==0){
                        a=i+1;
                    }else{
                        a=dp[i][j-1];
                    }

                    if(i==0){
                        b=j+1;
                    }else{
                        b=dp[i-1][j];
                    }

                    if(i==0){
                        c=j;
                    }else if(j==0){
                        c=i;
                    }
                    else{
                        c=dp[i-1][j-1];
                    }
                    dp[i][j]=min(a,min(b,c))+1;
                }
            }
        }
        return dp[n-1][m-1];

    }
};