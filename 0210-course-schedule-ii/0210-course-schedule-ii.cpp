class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> inc(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            int a=prerequisites[i][0];
            int b=prerequisites[i][1];
            adj[b].push_back(a);
            inc[a]++;
        }
        queue<int> q;

        for(int i=0;i<numCourses;i++){
            if(inc[i]==0){
                q.push(i);
            }
        }

        vector<int> ans;

        while(!q.empty()){
            int u=q.front();
            q.pop();
            ans.push_back(u);
            for(int i=0;i<adj[u].size();i++){
                int v=adj[u][i];
                inc[v]--;
                if(inc[v]==0){
                    q.push(v);
                }
            }
        }
        if(ans.size()!=numCourses){
            return {};
        }
        return ans;

    }
};