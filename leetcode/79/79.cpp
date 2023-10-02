class Solution {
private:
    bool dfs(vector<vector<char>>& board, string word, int index, int i, int j, int row, int col) {
        if (i < 0 || i >= row || j < 0 || j >= col || word[index] != board[i][j])
            return false;
        if (index == word.size() - 1) return true;

        board[i][j] = '#'; // To indicate already visited

        if (
            dfs(board, word, index+1, i-1, j, row, col) ||
            dfs(board, word, index+1, i+1, j, row, col) ||
            dfs(board, word, index+1, i, j-1, row, col) ||
            dfs(board, word, index+1, i, j+1, row, col)
        ) return true;

        board[i][j] = word[index];
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (dfs(board, word, 0, i, j, m, n))
                    return true;
            }
        }

        return false;
    }
};
