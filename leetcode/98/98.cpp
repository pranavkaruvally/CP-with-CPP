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
    vector<int> array;
    void inOrderTraversal(TreeNode* root) {
        if (root == nullptr) return;
        inOrderTraversal(root->left);
        array.push_back(root->val);
        inOrderTraversal(root->right);
    }
public:
    bool isValidBST(TreeNode* root) {
        inOrderTraversal(root);
        int prev = array[0];

        for(int i=1; i<array.size(); i++) {
            if (prev >= array[i]) return false;
            prev = array[i];
        }

        return true;
    }
};
