// Beats 100% of C++ users in time(0ms)
class Solution {
private:
    unordered_map<int, int> memo;
public:
    int rob(vector<int>& nums, int index = 0, int sum = 0) {
        if (memo.find(index) != memo.end()) return sum + memo[index];
        if (index >= nums.size()) {
            memo[index] = sum;
            return sum;
        }
        memo[index] = max(rob(nums, index+1, sum), rob(nums, index+2, sum+nums[index]));
        return memo[index];
    }
};
