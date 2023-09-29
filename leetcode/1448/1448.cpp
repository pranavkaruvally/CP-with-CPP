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
    int good = 0;
public:
    void goodNodes(TreeNode* root, int greatest) {
        if (root == nullptr) return;
        if (root->val >= greatest) {
            greatest = root->val;
            good++;
        }
        
        goodNodes(root->left, greatest);
        goodNodes(root->right, greatest);
    }

    int goodNodes(TreeNode* root) {
        goodNodes(root, -10001);
        
        return good;
    }
};
