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
 bool isBal=true;
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        isBal=true;
        height(root);
        return isBal;
    }
    int height(TreeNode* root) {
        // code here
        if(root==nullptr){
            return -1;
        }
        int l=height(root->left);
        int r=height(root->right);
        if(abs(l-r)>1){
            isBal=false;
        }
        return 1+max(l,r);
    }
};