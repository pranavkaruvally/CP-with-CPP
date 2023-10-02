class Solution {
private:
    unordered_map<char, string> mappings = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };

    vector<string> result;

    void dfs(const string& digits, const int& k, const string& res) {
        if (k == digits.size()) {
            result.push_back(res);
            return;
        };
        string options = mappings[digits[k]];
        for (char c: options) {
            dfs(digits, k+1, res+c);
        }
    }
public:
    vector<string> letterCombinations(string& digits) {
        if (digits == "") return result;
        int k = 0;
        string res = "";
        dfs(digits, k, res);

        return result;
    }
};
