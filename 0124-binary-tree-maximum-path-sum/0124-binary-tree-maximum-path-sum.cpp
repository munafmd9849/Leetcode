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
    int ans;
    int rootsum(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int l=rootsum(root->left);
        int r=rootsum(root->right);
        int ps=root->val+max(r,0)+max(l,0);
        ans=max(ans,ps);
        return root->val+max(max(l,r),0);
    }
    int maxPathSum(TreeNode* root) {
        ans=INT_MIN;
        rootsum(root);
        return ans;
    }
};