class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;

        sort(nums.begin(), nums.end());
        int prevTempTarget = -nums[0]+1;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] > 0)
                break;
            int tempTarget = -nums[i];
            if (tempTarget == prevTempTarget) continue;
            if (i+1 >= nums.size())
                break;
            
            int j = i+1, k = nums.size() - 1;

            while (j < k) {
                int thisSum = nums[j] + nums[k];
                if (thisSum == tempTarget) {
                    res.push_back({nums[i], nums[j], nums[k]});
                    while (j < k && nums[j] + nums[k] == tempTarget)
                        j++;
                }
                if (thisSum < tempTarget)
                    j++;
                else k--;
            }

            prevTempTarget = tempTarget;
        }

        return res;
    }
};
