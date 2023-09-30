class Solution {
private:
    vector<vector<int>> result;
    void recursion(vector<int>& nums, int k, vector<int> res) {
        if (k == nums.size()) {
            result.push_back(res);
            return;
        }
        
        recursion(nums, k+1, res);
        res.push_back(nums[k]);
        recursion(nums, k+1, res);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> res;
        recursion(nums, 0, res);

        return result;
    }
};
