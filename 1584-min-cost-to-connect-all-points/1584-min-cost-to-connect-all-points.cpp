class Solution {
public:
    int dist(vector<int>& u,vector<int>&v){
        return abs(v[0]-u[0])+abs(v[1]-u[1]);
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        int ans=0;
        vector<bool> vis(n,false);
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> mh;
        mh.push({0,0});
        while(!mh.empty()){
            auto[cost,u]=mh.top();
            mh.pop();
            if(vis[u]){
                continue;
            }
            vis[u]=true;
            ans+=cost;

            for(int v=0;v<n;v++){
                if(!vis[v]){
                    mh.push({dist(points[u],points[v]),v});
                }
            }
        }
        return ans;
    }
};