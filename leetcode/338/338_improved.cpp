class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n+1);
        dp[0] = 0;
        int offset = 1;
        for (int i=1; i<=n; i++) {
            if (i == 2*offset)
                offset *= 2;
            dp[i] = 1 + dp[i-offset];
        }

        return dp;
    }
};
