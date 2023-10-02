//Beats 100% (0 ms) in time

class Solution {
private:
    void dfs(vector<int>& nums, int k, vector<int>& res, vector<vector<int>>& result) {
        if (k == nums.size()) {
            result.push_back(res);
            return;
        }
        dfs(nums, k+1, res, result);
        res.push_back(nums[k]);
        dfs(nums, k+1, res, result);
        res.pop_back();
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> res;
        sort(nums.begin(), nums.end());
        dfs(nums, 0, res, result);
        sort(result.begin(), result.end());
        
        vector<vector<int>> finalResult;
        finalResult.push_back(result[0]);
        
        for (auto i=result.begin() + 1; i != result.end(); i++) {
            while (*i == *(i-1)) {
                i++;
            }
            finalResult.push_back(*i);
        }

        return finalResult;
    }
};
