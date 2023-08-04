class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> freq(nums.size() + 1);
        vector<int> res;

        for (int i: nums)
            count[i]++;

        for (int i: nums) {
            if (count[i] > 0)
                freq[count[i]].push_back(i);
                count[i] = 0;
        }

        for (int i=freq.size()-1; i>=0; i--) {
            for (int j=freq[i].size()-1; j>=0; j--) {
                res.push_back(freq[i][j]);
                if(res.size() == k) return res;
            }
        }
        return res;
    }
};
