//Beats 100%(0 ms) in time
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> temp(rowIndex+2, 0);
        vector<int> dp(rowIndex+2, 0);

        temp[1] = 1, dp[1] = 1;
        for (int i=1; i<= rowIndex; i++) {
            for(int j=1; j <= i+1; j++) {
                dp[j] = temp[j-1] + temp[j];
            }
            temp = dp;
        }
        dp.erase(dp.begin());
        return dp;
    }
};
