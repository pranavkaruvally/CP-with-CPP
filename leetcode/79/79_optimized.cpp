class Solution {
private:
    bool dfs(vector<vector<char>>& board, const string& word, const int& index, const int& m, const int& n, const int& row, const int& col) const {
        if (m < 0 || m >= row || n < 0 || n >= col || board[m][n] != word[index])
            return false;
        if (index == word.size() - 1)
            return true;

        board[m][n] = '#';

        if (
            dfs(board, word, index+1, m-1, n, row, col) ||
            dfs(board, word, index+1, m+1, n, row, col) ||
            dfs(board, word, index+1, m, n-1, row, col) ||
            dfs(board, word, index+1, m, n+1, row, col)
        ) return true;

        board[m][n] = word[index];
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        auto row = board.size();
        auto col = board[0].size();

        for (auto m=0; m<row; m++) {
            for (auto n=0; n<col; n++) {
                if (board[m][n] == word[0]) {
                    if (dfs(board, word, 0, m, n, row, col))
                        return true;
                }
            }
        }

        return false;
    }
};
