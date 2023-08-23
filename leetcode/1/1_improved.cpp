//Beats 88.63% of users (8 ms)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> oldTargets;

        for (int i=0; i<nums.size(); i++) {
            if (oldTargets[target - nums[i]])
                return {oldTargets[target-nums[i]]-1, i};
            else
                oldTargets[nums[i]] = i+1;
        }

        return {};
    }
};
