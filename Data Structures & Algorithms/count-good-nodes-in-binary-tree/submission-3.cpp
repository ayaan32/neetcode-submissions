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
    int res=0;
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        dfs(root, INT_MIN);
        return res;
    }
    void dfs(TreeNode* node, int msf) {
        if(!node) return;
        if(node->val >= msf) res++;
        dfs(node->right, max(msf, node->val));
        dfs(node->left, max(msf, node->val));
    }
};
