class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        unordered_map<int, vector<int>> freq;
        set<int> numss;
        vector<int> res;

        for (int i: nums)
            count[i]++;

        for (int i: nums) {
            if (count[i] > 0) {
                freq[count[i]].push_back(i);
                numss.insert(count[i]);
                count[i] = 0;
            }
        }

        for (auto i=numss.rbegin(); i != numss.rend(); i++) {
            for (auto j=freq[*i].rbegin(); j != freq[*i].rend(); j++) {
                res.push_back(*j);
                if (res.size() == k) return res;
            }
        }
        return res;
    }
};
