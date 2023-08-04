// Logic credits IdealYuvi's solution
// Beats 100% of other C++ users (0 ms)

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string s;
        vector<string> sols;
        dfs(0, 0, s, n, sols);

        return sols;
    }

    void dfs(int left, int right, string s, int n, vector<string>& v) {
        if (s.length() == 2*n) {
            v.push_back(s);
            return;
        }
        
        if (left < n) {
            s.push_back('(');
            dfs(left + 1, right, s, n, v);
            s.pop_back();
        }

        if (right < left) {
            s.push_back(')');
            dfs(left, right + 1, s, n, v);
            s.pop_back();
        }
    }
};
