class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> to(numCourses,vector<int>());
        vector<int> incoming(numCourses,0);
        for(int i=0;i<prerequisites.size();i++){
            int u=prerequisites[i][0];
            int v=prerequisites[i][1];
            to[v].push_back(u);
            incoming[u]++;
        }
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(incoming[i]==0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int nd=q.front();
            q.pop();
            for(int i=0;i<to[nd].size();i++){
                int v=to[nd][i];
                incoming[v]--;
                if(incoming[v]==0){
                    q.push(v);
                }
            }

        }

        for(int i:incoming){
            if(i!=0){
                return false;
            }
        }
        return true;
    }
};