class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        struct el {
            int data;
            int position;
        };
        vector<el> stack;
        vector<int> result(temperatures.size(), 0);

        stack.push_back({temperatures[0], 0});
        for (int i=1; i<temperatures.size(); i++) {
            if (temperatures[i] > stack.back().data) {
                while (stack.size() > 0 && temperatures[i] > stack.back().data) {
                    int pos = stack.back().position;
                    stack.pop_back();
                    result[pos] = i - pos;
                }
            }
            stack.push_back({temperatures[i], i});
        }

        return result;
    }
};
