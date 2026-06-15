class Solution {
public:

    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> d(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    d[i][j]=0;
                }
            }
        }
        int x[4]={-1,1,0,0,};
        int y[4]={0,0,-1,1};
        while(!q.empty()){
            pair<int,int> p=q.front();
            q.pop();
            int i=p.first;
            int j=p.second;
            for(int k=0;k<4;k++){
                int ai=i+x[k];
                int aj=j+y[k];
                if(ai>=0 && ai<n && aj>=0 && aj<m && grid[ai][aj]==1){
                    grid[ai][aj]=2;
                    d[ai][aj]=d[i][j]+1;
                    q.push({ai,aj});
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    return -1;
                }
                else{
                    ans=max(ans,d[i][j]);
                }

            }
        }
        return ans;
        
    }
};