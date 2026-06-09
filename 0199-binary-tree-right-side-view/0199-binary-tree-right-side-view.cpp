/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode *> q;
        vector<int> ans;
        if(root!=nullptr)
        q.push(root);
        else{
            return ans;
        }
        TreeNode* nd=root;
        while(!q.empty()){
            int n=q.size();
            for(int i=1;i<=n;i++){
                if(i==n){
                    ans.push_back(q.front()->val);
                }
                TreeNode* temp=q.front();
                if(temp->left!=nullptr)
                    q.push(temp->left);
                if(temp->right!=nullptr)
                    q.push(temp->right);
                q.pop();
            }
        }
        return ans;
    }
};