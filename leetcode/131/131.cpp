class Solution {
private:
    bool isPalindrome(const string& s) const {
        for (int i=0, j=s.length()-1; i <= j; i++, j--) {
            if (s[i] != s[j])
                return false;
        }

        return true;
    }
    void dfs(const string& s, const int& k, vector<string>& res, vector<vector<string>>& result) const {
        if (k == s.length()) {
            result.push_back(res);
            return;
        }
        for(int i=1; k+i <= s.length(); i++) {
            string temp = s.substr(k, i);
            if (isPalindrome(temp)) {
                res.push_back(temp);
                dfs(s, k + i, res, result);
                res.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> res;
        dfs(s, 0, res, result);

        return result;
    }
};
