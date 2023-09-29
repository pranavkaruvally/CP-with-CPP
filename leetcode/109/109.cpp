// Beats 100% (0 ms) in time
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if (root == nullptr) return result;

        queue<TreeNode*> myque;
        myque.push(root);
        while (myque.size() > 0) {
            result.push_back((myque.back())->val);
            int len = myque.size();
            for (int i=0; i<len; i++) {
                TreeNode* node = myque.front();
                myque.pop();
                if (node->left != nullptr) myque.push(node->left);
                if (node->right != nullptr) myque.push(node->right);
            }
        }

        return result;
    }
};
