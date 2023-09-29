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
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int& k, int l, int r) {
        if (k >= preorder.size()) return NULL;
        if (l > r) return NULL;

        TreeNode* node = new TreeNode(preorder[k]);
        int i;
        for (i=0; i<inorder.size(); i++) {
            if (inorder[i] == preorder[k]) break;
        }
        k++;

        node->left = build(preorder, inorder, k, l, i-1);
        node->right = build(preorder, inorder, k, i+1, r);

        return node;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int k = 0;
        return build(preorder, inorder, k, 0, inorder.size()-1);
    }
};
