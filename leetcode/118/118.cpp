class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> nums;
        vector<int> temp;
        nums.push_back({1});

        for (int i=0; i < numRows - 1; i++) {
            vector<int> nextRow;
            temp = nums[i];
            int a = 0, b = temp[0];
            for (int j=0; j<=i; j++) {
                nextRow.push_back(a + b);
                a = temp[j];
                b = temp[j+1];
            }
            nextRow.push_back(1);
            nums.push_back(nextRow);
        }
        return nums;
    }
};
