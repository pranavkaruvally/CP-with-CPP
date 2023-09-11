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
    int maximumDepth = 0;
public:
    int maxDepth(TreeNode* root, int depth=1) {
        if (root == nullptr) return maximumDepth;
        maximumDepth = max(depth, maximumDepth);
        maxDepth(root->left, depth+1);
        maxDepth(root->right, depth+1);

        return maximumDepth;
    }
};
