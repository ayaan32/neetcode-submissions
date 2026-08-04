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
    int maxDepth(TreeNode* root) {
        stack<pair<TreeNode*, int>> sti;
        sti.push({root, 1});
        int res = 0;
        while(!sti.empty()) {
            pair<TreeNode*, int> current = sti.top();
            sti.pop();
            TreeNode* node = current.first;
            int depth = current.second;
            if(node != nullptr) {
                res = max(res, depth);
                sti.push({node->left, depth + 1});
                sti.push({node->right, depth + 1});
            }
        }
        return res;
    }
};
