class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]!=0)return false;
        vector<pair<int,int>> pos(n*n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                pos[grid[i][j]]={i,j};
            }
        }
        for(int i=1;i<n*n;i++){
            auto [x1, y1] = pos[i-1];
            auto [x2, y2] = pos[i];

            int dx=abs(x1-x2);
            int dy=abs(y1-y2);

            if(dx*dy!=2)return false;

        }
        return true;
    }
};

// class Solution {
// public:
//     bool checkValidGrid(vector<vector<int>>& grid) {
//         int val=0;
//         int n=grid.size();
//         int u[]={0,0};
//         vector<vector<bool>> vis(n,vector<bool>(n,false));
//         int x[]={1,2,  1,  2,  -1 , -2,  -1,  -2};
//         int y[]={2 , 1 ,-2, -1,   2,   1,  -2 , -1};
//         while(val<n*n-1){
//             int i=u[0],j=u[1];
//             bool flag=false;
//             for(int a=0;a<8;a++){
//                 if(i+x[a]<n && j+y[a]<n && i+x[a]>=0 && j+y[a]>=0 && !vis[i+x[a]][j+y[a]] && grid[i+x[a]][j+y[a]]==val+1){
//                     val++;
//                     u[0]=i+x[a];
//                     u[1]=j+y[a];
//                     vis[i+x[a]][j+y[a]]=true;
//                     flag=true;
//                 }
//             }
//             if(!flag){
//                 return false;
//             }

//         }
//         return true;
//     }
// };












// class Solution {
// public:
//     bool checkValidGrid(vector<vector<int>>& grid) {
//         int n=grid.size();
//         vector<vector<bool>> vis(n,vector<bool>(n,false));
//         vector<vector<int>> dis(n,vector<int>(n,-1));
        
//         vis[0][0]=true;
//         dis[0][0]=0;
        
//         queue<pair<int,int>> q;
//         q.push({0,0});
        
//         int x[]={1,2,  1,  2,  -1 , -2,  -1,  -2};
//         int y[]={2 , 1 ,-2, -1,   2,   1,  -2 , -1};
//         while(q.size()>0){
//             pair<int,int> u=q.front();
//             int i=u.first;
//             int j=u.second;
//             q.pop();
//             bool flag=false;
//             for(int a=0;a<8;a++){

//                 if(i+x[a]<=n && j+y[a]<=n && i+x[a]>0 && j+y[a]>0 && !vis[i+x[a]][j+y[a]]){
//                     q.push({i+x[a],j+y[a]});
//                     vis[i+x[a]][j+y[a]]=true;
//                     dis[i+x[a]][j+y[a]]=dis[i][j]+1;
//                 }
//             }
            
//         }
//         return dis[targetPos[0]][targetPos[1]];
//     }
// };










// class Solution {
// public:
//     bool checkValidGrid(vector<vector<int>>& grid) {
//         int n=grid.size();
//         vector<vector<bool>> vis(n,vector<bool>(n,false));
//         vector<vector<int>> dis(n,vector<int>(n,-1));
        
//         vis[0][0]=true;
//         dis[0][0]=0;
        
//         queue<pair<int,int>> q;
//         q.push({0,0});
        
//         int x[]={1,2,  1,  2,  -1 , -2,  -1,  -2};
//         int y[]={2 , 1 ,-2, -1,   2,   1,  -2 , -1};
//         while(q.size()>0){
//             pair<int,int> u=q.front();
//             int i=u.first;
//             int j=u.second;
//             q.pop();
//             bool flag=false;
//             for(int a=0;a<8;a++){

//                 if(i+x[a]<=n && j+y[a]<=n && i+x[a]>0 && j+y[a]>0 && !vis[i+x[a]][j+y[a]]){
//                     q.push({i+x[a],j+y[a]});
//                     vis[i+x[a]][j+y[a]]=true;
//                     dis[i+x[a]][j+y[a]]=dis[i][j]+1;
//                 }
//             }
            
//         }
//         return dis[targetPos[0]][targetPos[1]];
//     }
// };