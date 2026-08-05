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
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        int leftHt = maxH(root->left);
        int rightHt = maxH(root->right);
        int dia = leftHt + rightHt;
        int sub = max(diameterOfBinaryTree(root->left),                   diameterOfBinaryTree(root->right));
        return max(dia, sub);
    }

    int maxH(TreeNode* root) {
        if(!root) return 0;
        return 1+ max(maxH(root->left), maxH(root->right));
    }
};
