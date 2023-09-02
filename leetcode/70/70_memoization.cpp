//Beats 100% in time(0ms)
class Solution {
private:
    unordered_map<int, int> memo;
public:
    int climbStairs(int n) {
        if (memo[n] > 0) return memo[n];
        if (n == 2) return 2;
        if (n == 1) return 1;

        memo[n] = climbStairs(n-1) + climbStairs(n-2);
        return memo[n];
    }
};
