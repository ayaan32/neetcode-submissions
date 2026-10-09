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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* cur;
        vector<vector<int>> res;
        while (!q.empty()) {
            int n = q.size();
            vector<int> localVec;
            for (int i = 0; i < n; i++) {
                cur = q.front();
                q.pop();
                if (cur) {
                    localVec.push_back(cur->val);
                    q.push(cur->left);
                    q.push(cur->right);
                }
            }
            if(!localVec.empty()) res.push_back(localVec);
        }
        return res;
    }
};
