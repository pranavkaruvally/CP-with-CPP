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
        vector<vector<int>> result;
        if (root == nullptr) return result;
        vector<int> vals;
        vector<TreeNode*> prev, curr;
        prev.push_back(root);
        while (prev.size() > 0 || curr.size() > 0) {
            while (prev.size() > 0) {
                TreeNode* node = prev.front();
                prev.erase(prev.begin());
                vals.push_back(node->val);
                if (node->left != nullptr) curr.push_back(node->left);
                if (node->right != nullptr) curr.push_back(node->right);
            }
            result.push_back(vals);
            vals.clear();
            prev = curr;
            curr.clear();
        }

        return result;
    }
};
