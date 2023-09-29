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
        queue<TreeNode*> myque;
        
        myque.push(root);
        while (!myque.empty()) {
            int count = myque.size();

            for (int i=0; i<count; i++) {
                TreeNode* node = myque.front();
                myque.pop();
                vals.push_back(node->val);
                if (node->left != nullptr) myque.push(node->left);
                if (node->right != nullptr) myque.push(node->right);
            }
            result.push_back(vals);
            vals.clear();
        }

        return result;
    }
};
