class Solution {
private:
    vector<vector<int>> result;
    void recursion(vector<int>& candidates, int target, int k, vector<int> res, int sum) {
        if (k == candidates.size()) return;
        if (sum > target) return;
        if (sum == target) {
            result.push_back(res);
            return;
        }
        recursion(candidates, target, k+1, res, sum);
        res.push_back(candidates[k]);
        sum += candidates[k];
        recursion(candidates, target, k, res, sum);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        recursion(candidates, target, 0, {}, 0);
        return result;        
    }
};
