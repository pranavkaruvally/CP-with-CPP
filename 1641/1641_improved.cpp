class Solution {
public:
    long long int countVowelStrings(int n) {
        vector<long long int> dp(5, 0);
        long long int myTotal = 1;
        long long int temp, deleted;

        for (int i = 0; i < n; i++) {
            deleted = dp[0];
            dp[0] = myTotal;
            for (int j=1; j<5; j++) {
                temp = dp[j-1] - deleted;
                deleted = dp[j];
                dp[j] = temp;
                myTotal += dp[j];
            }
        }

        return myTotal;
    }
};
