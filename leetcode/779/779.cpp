class Solution {
public:
    int kthGrammar(int n, int k) {
        int l = 1, r = 1 << (n-1);
        int cur = 0;

        for (int i=0; i<n-1; i++) {
            int mid = (l + r) / 2;
            if (k <= mid)
                r = mid;
            else {
                l = mid+1;
                cur = (cur) ? 0 : 1;
            }
        }

        return cur;
    }
};
