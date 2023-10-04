class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.length();
        vector<bool> dp(n+1, false);
        unordered_set<string> thesaurus(wordDict.begin(), wordDict.end());
        dp[0] = true;

        for (int i=1; i<=n; i++) {
          for (int j=0; j<i; j++) {
            if (dp[j] && thesaurus.find(s.substr(j, i - j)) != thesaurus.end()) {
              dp[i] = true;
              break;
            }
          }
        }

        return dp[n];
    }
};
