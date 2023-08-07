class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> elems;

        for (int i=0; i<9; i++) {
            for (int j=0; j<9; j++) {
                if (board[i][j] == '.') continue;
                if (!elems.count(board[i][j]))
                    elems.insert(board[i][j]);
                else
                    return false;
            }
            elems.clear();
        }
        elems.clear();
        for (int i=0; i<9; i++) {
            for (int j=0; j<9; j++) {
                if (board[j][i] == '.') continue;
                if (!elems.count(board[j][i]))
                    elems.insert(board[j][i]);
                else
                    return false;
            }
            elems.clear();
        }

        int si = 0, sj = 0;
        elems.clear();
        for(int _=0; _<9; _++) {
            if (si == 9) {
                si = 0;
                sj += 3;
            }
            for (int i=si; i<si+3; i++) {
                for (int j=sj; j<sj+3; j++) {
                    if (board[i][j] == '.') continue;
                    if (!elems.count(board[i][j]))
                        elems.insert(board[i][j]);
                    else
                        return false;
                }
            }
            elems.clear();
            si += 3;
        }

        return true;
    }
};
