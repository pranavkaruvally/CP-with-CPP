class Solution {
public:
    int t(int a, int b, int c, int n) {
        if (n == 0)
            return a;
        if (n == 1)
            return b;
        if (n == 2)
            return c;

        return t(b, c, a+b+c, n-1);
    }
    int tribonacci(int n) {
        return t(0, 1, 1, n);
    }
};
