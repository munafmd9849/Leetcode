class Solution {
public:
    bool fun(int i,int n, int j,int m, vector<vector<char>>& board, string &s,int ind,int l){

        if(i<0 || j<0 || i==n || j==m || board[i][j]!=s[ind] || board[i][j]=='#'){
            return false;
        }
        if(ind==l-1){
            return true;
        }

        int x[]={0,0,1,-1};
        int y[]={1,-1,0,0};
        bool ans=false;
        board[i][j]='#';
        for(int k=0;k<4;k++){
            ans|=fun(i+x[k],n,j+y[k],m,board,s,ind+1,l);
        }
        board[i][j]=s[ind];
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(),m=board[0].size(),l=word.length();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(fun(i,n,j,m,board,word,0,l)){
                    return true;
                }
            }
        }
        return false;
    }
};