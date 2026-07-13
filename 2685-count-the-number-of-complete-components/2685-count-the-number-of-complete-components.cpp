class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis,
             vector<int>& component) {
        vis[node] = true;
        component.push_back(node);
        for (int nei : adj[node]) {
            if (!vis[nei]) {
                dfs(nei, adj, vis, component);
            }
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n, vector<int>());
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int ans = 0;
        vector<bool> vis(n);
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {

                vector<int> component;
                dfs(i, adj, vis, component);

                int nodes = component.size();
                long long degreeSum = 0;

                for (int node : component) {
                    degreeSum += adj[node].size();
                }

                long long edgesCount = degreeSum / 2;
                long long required = 1LL * nodes * (nodes - 1) / 2;

                if (edgesCount == required) {
                    ans++;
                }
            }
        }
        return ans;
    }
};