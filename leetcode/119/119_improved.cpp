//Beats 100%(0 ms) in time
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result;
        long long unsigned a = 1;
        for (int i=1; i<=rowIndex+1; i++) {
            result.push_back(a);
            a = a * (rowIndex - i + 1) / i;
        }

        return result;
    }
};
