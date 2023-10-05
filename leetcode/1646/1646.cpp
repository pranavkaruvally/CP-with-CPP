class Solution {
public:
    int getMaximumGenerated(int n) {
        if (n == 0) return 0;
        vector<int> result(n+1, 0);
        result[1] = 1;

        for (int i=2; i<=n; i++) {
            if (i%2 == 0) {
                result[i] = result[i/2];
            } else {
                result[i] = result[i/2] + result[i/2 + 1];
            }
       }

       return *max_element(result.begin(), result.end());
    }
};
