//Beats 100%(0 ms) of users
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        nums.push_back(0);
        for (int i=n-2; i >= 0; i--) {
            nums[i] = max(nums[i] + nums[i+2], nums[i+1]);
        }

        return nums[0];
    }
};
