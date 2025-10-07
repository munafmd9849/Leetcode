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
    vector<int> ans1,ans2;
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)return true;
        preorderTraversal(root->left);
        postorderTraversal(root->right);
        reverse(ans2.begin(),ans2.end());
        return ans1==ans2;


    }
    void preorderTraversal(TreeNode* root) {
        if(root==nullptr){
            ans1.push_back(-101);
            return;
        }
        ans1.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        
    }
    void postorderTraversal(TreeNode* root) {
        if(root==nullptr){
            ans2.push_back(-101);
            return;
        }
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        ans2.push_back(root->val);
    }

};

// 2 3 n n 4 n n

// n n 4 n n 3 2

// 2 3 4 
// 4 3 2