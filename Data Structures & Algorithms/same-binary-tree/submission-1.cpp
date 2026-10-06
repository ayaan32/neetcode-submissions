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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack<pair<TreeNode*, TreeNode*>> st;
        st.push({p, q});
        while(!st.empty()) {
            auto i = st.top();
            st.pop();
            if(!i.first && !i.second) continue;
            if(!i.first || !i.second || i.first->val != i.second->val) return false;
            st.push({i.first->left, i.second->left});
            st.push({i.first->right, i.second->right});
        }
        return true;
    }
};
