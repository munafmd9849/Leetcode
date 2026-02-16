class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        int k=0;
        unordered_map<int,int> um;
        for(int i=n-1;i>=0;i--){
            if((n-1-i)%2==0){
                for(int j=0;j<m;j++){
                    k++;
                    if(board[i][j]!=-1){
                        um[k]=board[i][j];
                    }
                }
            }
            else{
                for(int j=m-1;j>=0;j--){
                    k++;
                    if(board[i][j]!=-1){
                        um[k]=board[i][j];
                    }
                }
            }
        }

        vector<int> vis(n*m+1);
        vector<int> dis(n*m+1,-1);
        queue<int> q;
        vis[0]=true;
        dis[0]=0;
        q.push(0);
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(int i=1;i<=6;i++){
                int v=u+i;
                if(v>=n*m+1){
                    break;
                }
                if(um.find(v)!=um.end()){
                    v=um[v];
                }
                if(!vis[v]){
                    vis[v]=true;
                    q.push(v);
                    dis[v]=dis[u]+1;
                }

            }
        }
        return dis[n*m];
    }
};