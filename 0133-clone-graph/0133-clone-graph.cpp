/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (!node) return nullptr;
        unordered_map<Node*,Node*> um;
        queue<Node*> que;
        que.push(node);
        um[node]=new Node(node->val);
        while(!que.empty()){
            Node* curr= que.front();
            que.pop();
            vector<Node*> &neighbors=curr->neighbors;
            for(int i=0;i<neighbors.size();i++){
                if(um.find(neighbors[i])==um.end()){
                    que.push(neighbors[i]);
                    um[neighbors[i]]=new Node(neighbors[i]->val);
                }
                um[curr]->neighbors.push_back(um[neighbors[i]]);

            }
        }
        return um[node];

        
    }
};













// class Solution {
// public:
//     Node* cloneGraph(Node* node) {
        
//         Node* nn=new Node(node->val);
//         queue<Node*> que;
//         queue<Node*> que2;
//         unordered_set<Node*> visited;
//         unordered_set<Node*> visited2;
//         que.push(node);
//         que2.push(nn);
//         visited.insert(node);
//         visited2.insert(nn);
//         while(!que.empty()){
//             Node* u=que.front();
//             Node* u2=que2.front();
//             que.pop();
//             que2.pop();
//             vector<Node*> neighbors=u->neighbors;
//             for(int i=0;i<neighbors.size();i++){
//                 if(visited.find(neighbors[i])==visited.end()){
//                     Node* x=new Node(neighbors[i]->val);
//                     u2->neighbors.push_back(x);
//                     que2.push(x);
//                     visited2.insert(x);


//                     que.push(neighbors[i]);
//                     visited.insert(neighbors[i]);

//                 }
//             }
//         }
//         return nn;
//     }
// };