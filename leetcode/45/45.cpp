class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        vector<int> dp(nums.size(), 0);
        
        for (int i=nums.size() - 2; i >=0; i--) {
            int jump = nums.size();
            for (int j = 1; j <= nums[i] && i+j < nums.size(); j++) {
                jump = min(jump, dp[i+j]);
            }
            dp[i] = 1 + jump;
        }

        return dp[0];
    }
};
