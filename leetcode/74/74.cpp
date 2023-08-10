//Beats 100% users in time(0ms)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lm, rm;
        int rowsize = matrix[0].size();
        int i = 0, j = matrix.size()-1;
        int m, n;

        if (target >= matrix[0][0] && target <= matrix[0][rowsize-1])
            m = 0, i = 2, j = 1;
        if (target >= matrix[matrix.size()-1][0] && target <= matrix[matrix.size()-1][rowsize-1])
        m = matrix.size() - 1, i = 2, j = 1;

        while (i <= j) {
            m = (i + j) / 2;
            lm = matrix[m][0], rm = matrix[m][rowsize-1];
            if (target >= lm && target <= rm)
                break;
            else {
                if (target < lm) {
                    j = m-1;
                } else {
                    i = m+1;
                }
            }
        }

        vector<int> row = matrix[m];
        if (target < row[0] || target > row[rowsize - 1])
            return false;

        i = 0;
        j = rowsize - 1;

        if (target == row[0] || target == row[rowsize - 1])
            return true;

        while (i <= j) {
            n = (i + j) / 2;
            if (target == row[n])
                return true;
            else if (target < row[n]) {
                j = n-1;
            } else {
                i = n+1;
            }
        }

        return false;
    }
};
