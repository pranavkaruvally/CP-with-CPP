class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = nums[0];
        int currentSum = nums[0];
        for (int i=1; i<nums.size(); i++) {
            currentSum = max(nums[i], nums[i] + currentSum);
            result = max(result, currentSum);
        }

        return result;
    }
};
