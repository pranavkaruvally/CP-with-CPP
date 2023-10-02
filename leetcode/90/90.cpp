class Solution {
private:
    void dfs(vector<int>& nums, int k, vector<int> res, vector<vector<int>>& result) {
        if (k == nums.size()) {
            sort(res.begin(), res.end());
            result.push_back(res);
            return;
        }
        dfs(nums, k+1, res, result);
        res.push_back(nums[k]);
        dfs(nums, k+1, res, result);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        dfs(nums, 0, {}, result);
        sort(result.begin(), result.end());

        vector<vector<int>> finalResult;
        finalResult.push_back(result[0]);
        
        for (int i=1; i<result.size(); i++) {
            if (result[i] == result[i-1])
                continue;
            finalResult.push_back(result[i]);
        }

        return finalResult;
    }
};
