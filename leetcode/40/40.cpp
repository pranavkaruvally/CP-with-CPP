//Beats 100%(0 ms) in time
class Solution {
private:
    vector<vector<int>> result;
    void dfs(vector<int>& candidates, vector<int>& res, const int& target, int k, int total) {
        if (total > target) return;
        if (total == target) {
            result.push_back(res);
            return;
        }
        if (k == candidates.size()) return;

        res.push_back(candidates[k]);
        total += candidates[k];
        dfs(candidates, res, target, k+1, total);
        res.pop_back();
        total -= candidates[k];
        while (k+1 < candidates.size() && candidates[k] == candidates[k+1])
            k++;
        dfs(candidates, res, target, k+1, total);
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> res;
        sort(candidates.begin(), candidates.end());
        dfs(candidates, res, target, 0, 0);

        return result;
    }
};
