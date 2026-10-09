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
    vector<int> res;
    int kthSmallest(TreeNode* root, int k) {
        int copy = k;
        dfs(root, copy);
        return res.back();
    }
    void dfs(TreeNode* node, int& k) {
        if(!node || k==0) return;
        dfs(node->left, k);
        if(k==0) return;
        k--;
        res.push_back(node->val);
        dfs(node->right, k);
    }
};
