class Solution {
public:
    
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>>  g[n+1];

        for(int i=0;i<times.size();i++){
            g[times[i][0]].push_back({times[i][1], times[i][2]});
        }

        vector<int> d(n+1,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> mh;
        mh.push({k,0});
        d[k]=0;
        while(!mh.empty()){
            pair<int,int> t=mh.top();
            mh.pop();
            int u=t.first;
            int bu=t.second;
            if(bu>d[u]){
                continue;
            }
            for(int i=0; i<g[u].size(); i++){
                pair<int,int> p=g[u][i];
                int v=p.first;
                int w=p.second;
                if(d[u]+w<d[v]){
                    d[v]=d[u]+w;
                    mh.push({v,d[v]});
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(d[i]==INT_MAX) return -1;
            ans=max(ans,d[i]);
        }
        return ans;
    }
};