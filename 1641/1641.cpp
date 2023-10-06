class Solution {
public:
    unsigned long long int countVowelStrings(int n) {
        vector<vector<unsigned long long int>> dp(n+1, vector<unsigned long long int>(5, 0));
        unsigned long long int myTotal = 1;

        for (int i=1; i<=n; i++) {
            dp[i][0] = myTotal;
            for (int j=1; j<5; j++) {
                dp[i][j] = dp[i][j-1] - dp[i-1][j-1];
                myTotal += dp[i][j];
            }
        }

        return myTotal;
    }
};
