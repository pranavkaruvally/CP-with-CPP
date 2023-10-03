//Beats 100%(0 ms) in time
class Solution {
public:
    int numDecodings(string s) {
        if (s[0] == '0') return 0;
        int n = s.length();
        if (n == 1) return 1;
        vector<int> dp(n, 0);
        dp.push_back(1);
        dp[n-1] = (s[n-1] == '0') ? 0 : 1;

        for (int i=n-2; i>=0; i--) {
            if (s[i] == '0')
                continue;
            if (s[i] == '1' || (s[i] == '2' && s[i+1] <= '6')) {
                dp[i] = dp[i+1] + dp[i+2];
            } else {
                dp[i] = dp[i+1];
            }
        }

        return dp[0];
    }
};
