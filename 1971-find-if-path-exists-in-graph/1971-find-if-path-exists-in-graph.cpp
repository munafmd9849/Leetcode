class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
            vector<vector<int>> adj(n);
            for(int i=0;i<edges.size();i++){
                adj[edges[i][0]].push_back(edges[i][1]);
                adj[edges[i][1]].push_back(edges[i][0]);
            }
            queue<int> que;
            vector<bool> visited(n,false);
            que.push(source);
            visited[source]=true;
            while(!que.empty()){
                int u=que.front();
                que.pop();
                for(int i=0;i<adj[u].size();i++){
                    if(!visited[adj[u][i]]){
                        que.push(adj[u][i]);
                        visited[adj[u][i]]=true;
                    }
                }
            }

            return visited[destination];

    }
};