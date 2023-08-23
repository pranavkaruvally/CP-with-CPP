// Beats 100% (0ms) in time

class Solution {
public:
    int f(int a, int b, int n) {
        if (n == 0)
            return a;
        if (n == 1)
            return b;

        return f(b, a+b, n-1);
    }
    int fib(int n) {
        return f(0, 1, n);
    }
};
