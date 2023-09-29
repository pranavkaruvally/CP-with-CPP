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
    int count=0;
    int result;
    void inOrderTraversal(TreeNode* root, int k) {
        if (root == nullptr) return;
        if (count == k) return;
        inOrderTraversal(root->left, k);
        count++;
        if (count == k) {
            result = root->val;
            return;
        }
        inOrderTraversal(root->right, k);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        inOrderTraversal(root, k);
        return result;
    }
};
