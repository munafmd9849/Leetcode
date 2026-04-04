class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j,int n, int m){
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]=='0' ){
            return;
        }
        grid[i][j]='0';
        int x[]={0,0,1,-1};
        int y[]={1,-1,0,0};
        for(int k=0;k<=3;k++){
            dfs(grid,i+x[k],j+y[k],n,m);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int c=0,n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    c++;
                    dfs(grid,i,j,n,m);
                }
            }
        }
        return c;
    }
};