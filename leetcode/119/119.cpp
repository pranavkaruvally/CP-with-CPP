//Beats 100%(0 ms) in time
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> dp(rowIndex+1, vector<int>(rowIndex+2, 0));

        dp[0][1] = 1;
        for (int i=1; i<= rowIndex; i++) {
            for(int j=1; j <= i+1; j++) {
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            }
        }
        dp[rowIndex].erase(dp[rowIndex].begin());
        return dp[rowIndex];
    }
};
