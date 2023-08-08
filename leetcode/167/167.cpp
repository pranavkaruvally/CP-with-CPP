class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> solution;
        int i=0, j=numbers.size() - 1;

        while (i < j) {
            int sum = numbers[i]+numbers[j];
            if (sum == target) {
                solution.push_back(i+1);
                solution.push_back(j+1);
                break;
            }
            if (sum < target)
                i++;
            else
                j--;
        }

        return solution;
    }
};
