class Solution {
public:
    void makedot(vector<vector<char>>& board,int i, int j, int m, int n){
        if(i>=m || i<0 || j>=n || j<0 || board[i][j]=='.'){return; }
        board[i][j]='.';
        makedot(board,i,j-1,m,n);
        makedot(board,i,j+1,m,n);
        makedot(board,i+1,j,m,n);
        makedot(board,i-1,j,m,n);


    }
    int countBattleships(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        int c=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='X'){
                    c++;
                    makedot(board,i,j,m,n);
                }
            }
        }
        return c;
    }
};