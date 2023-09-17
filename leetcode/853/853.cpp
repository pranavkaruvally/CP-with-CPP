class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> stack;
        int result = 0;
        double maxTime = 0.0;

        for (int i=0; i<position.size(); i++) {
            double t = static_cast<double>(target - position[i]) / speed[i];
            stack.push_back({position[i], t});
        }
        sort(stack.begin(), stack.end());

        for (int i = stack.size()-1; i >= 0; i--) {
            double time = stack[i].second;
            if (time > maxTime) {
                maxTime = time;
                result++;
            }
        }
        return result;
    }
};
