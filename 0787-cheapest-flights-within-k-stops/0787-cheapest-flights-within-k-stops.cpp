class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        vector<vector<pair<int,int>>> adj(n,vector<pair<int,int>>(0));
        for(int i=0;i<flights.size();i++){
            int u=flights[i][0];
            int v=flights[i][1];
            int prize=flights[i][2];
            adj[u].push_back({v,prize});
        }


        priority_queue<pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> q;

        vector<vector<int>> dis(n, vector<int>(k + 2, INT_MAX));
        dis[src][0]=0;
        q.push({0,{src,0}});

        while(!q.empty()){
            pair<int,pair<int,int>> p=q.top();
            int l=p.first;
            int node=p.second.first;
            int s=p.second.second;
            q.pop();
            if(node==dst){
                return l;
            }
            if(s>k){
                continue;
            }
            for(auto e:adj[node]){
                int v=e.first;
                int prize=e.second;
                if(s<=k && (l+prize)<dis[v][s+1]){
                    dis[v][s+1]=l+prize;
                    q.push({dis[v][s+1],{v,s+1}});
                }
            }

        }

        return -1;


    }
};