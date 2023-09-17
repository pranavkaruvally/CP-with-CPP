class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
       if (p == nullptr) {
           if (q == nullptr) return true;
           return false;
       }
       if (q == nullptr) return false;
       
       if (p->val != q->val) return false;
       return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
