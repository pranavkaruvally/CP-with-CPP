//Beats 95.92%(41 ms) in time and 61.39% in memory(14.7:::::8)
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (amount == 0) return 0;
        int n = coins.size();
        vector<int> dp(amount+1, 0);
        for (int i=1; i<=amount; i++) {
            int Inf = (unsigned int)(1 << 31) - 1; // infinity in that regards
            int mini = Inf;
            for (int coin: coins) {
                if (i - coin < 0 || dp[i - coin] == -1) {
                    continue;
                }
                mini = min(mini, dp[i-coin]);
            }
            if (mini == Inf)
                dp[i] = -1;
            else
                dp[i] = mini + 1;
        }

        if (dp[amount] == -1) return -1;

        return dp[amount];
    }
};
