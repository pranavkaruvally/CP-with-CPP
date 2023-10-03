class Solution {
private:
    unordered_map<int, int> memo;
public:
    int numDecodings(string s, int i=0) {
        if (i > s.length()) return 0;
        if (i == s.length()) return 1;
        if (memo.find(i) != memo.end())
            return memo[i];
        if (s[i] == '0') return 0;
        int ways1 = numDecodings(s, i+1);
        int ways2 = 0;
        if (s.length() - i > 1) {
            if (s[i] > '2' || (s[i] == '2' && s[i+1] > '6'))
                return ways1;
            ways2 = numDecodings(s, i+2);
        }

        memo[i] = ways1 + ways2;
        return memo[i];
    }
};
