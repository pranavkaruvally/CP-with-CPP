class Solution {
private:
    struct heightBalance {
        bool balanced;
        int height;
    };
public:
    heightBalance dfs(TreeNode* root) {
        if (root == nullptr) return {true, 0};
        heightBalance left = dfs(root->left);
        heightBalance right = dfs(root->right);
        bool balance = left.balanced && right.balanced
                         && (abs(left.height - right.height) <= 1);

        return {balance, 1 + max(left.height, right.height)};
    }
    bool isBalanced(TreeNode* root) {
        return dfs(root).balanced;
    }
};
