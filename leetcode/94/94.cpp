//Beats 100% of users in time (0ms)

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
private:
    vector<int> list;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if (root == nullptr) return {};
        if (root->left != nullptr) inorderTraversal(root->left);
        list.push_back(root->val);
        if (root->right != nullptr) inorderTraversal(root->right);

        return list;
    }
};
