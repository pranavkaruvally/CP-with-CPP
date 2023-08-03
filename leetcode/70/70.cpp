class Solution {
public:
    int climbStairs(int n) {
        vector<int> value(50, 0);

        value[1] = 1;
        value[2] = 2;

        if (n == 1 || n == 2)
            return value[n];

        for (int i=3; i<=n; i++) {
            value[i] = value[i-1] + value[i-2];
        }

        return value[n];
    }
};
