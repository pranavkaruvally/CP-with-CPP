// Beats 100%(0 ms) in time
class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int a = robber(nums, 1, nums.size() - 1);
        int b = robber(nums, 0, nums.size() - 2);

        return max(a, b);
    }

    int robber(vector<int>& nums, int start, int stop) {
        int prev = 0, curr = 0, next = 0;

        for (int i=start; i<=stop; i++) {
            next = max(prev + nums[i], curr);
            prev = curr;
            curr = next;
        }

        return curr;
    }
};
