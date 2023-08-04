class Solution {
public:
    vector<string> sols;
    vector<string> generateParenthesis(int n) {
        string s;
        dfs(0, 0, s, n);

        return sols;
    }

    void dfs(int left, int right, string s, int n) {
        if (s.length() == 2*n) {
            sols.push_back(s);
            return;
        }
        
        if (left < n) 
            dfs(left + 1, right, s + '(', n);

        if (right < left) 
            dfs(left, right + 1, s + ')', n);
        
    }
};
