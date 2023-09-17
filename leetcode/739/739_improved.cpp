//Beats 99.84% (98ms) C++ users in time and 63.26%(99.73 MB) in memory

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int stack[temperatures.size()][2];
        vector<int> result(temperatures.size(), 0);
        int top = -1;

        stack[++top][0] = temperatures[0];
        stack[top][1] = 0;
        for (int i=1; i<temperatures.size(); i++) {
            if (temperatures[i] > stack[top][0]) {
                while (top >= 0 && temperatures[i] > stack[top][0]) {
                    int pos = stack[top][1];
                    top--;
                    result[pos] = i - pos;
                }
            }
            stack[++top][0] = temperatures[i];
            stack[top][1] = i;
        }

        return result;
    }
};
