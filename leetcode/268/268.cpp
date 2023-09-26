class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = 0;
        int n = 0;
        bool isThereZero = false;
        for (int i: nums) {
            res ^= i;
            n = max(n, i);
            if (i == 0) isThereZero = true;
        }
        for (int i=0; i<=n; i++)
            res ^= i;

        if (res == 0 && isThereZero) return n+1;
        return res;
    }
};
