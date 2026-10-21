class Solution {
public:
    int maxDepth(TreeNode* root) {
        return dfs(root);
    }
    int dfs(TreeNode* root) {
        if(!root) return 0;
        return 1 + max(dfs(root->left), dfs(root->right));
    }
};