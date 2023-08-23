class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> dict;

        for (int i=0; i<nums.size(); i++) {
            int comp = target - nums[i];
            if (dict.count(comp) > 0)
                return {i, dict.at(comp)};
            dict[nums[i]] = i;
        }

        return {};
    }
};
