//Beats 100% of users in time(0ms)
class Solution {
public:
    int cS(int n, int a, int b) {
        if (n == 2) return b;
        if (n == 1) return a;

        return cS(n-1, b, a+b);
    }
    int climbStairs(int n) {
        return cS(n, 1, 2);
    }
};
