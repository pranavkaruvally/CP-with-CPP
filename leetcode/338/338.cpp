class Solution {
public:
    int numBits(int n) {
        int res = 0;
        while (n > 0) {
            n &= (n-1);
            res++;
        }
        
        return res;
    }
    vector<int> countBits(int n) {
        vector<int> result;
        for (int i=0; i<=n; i++) {
            result.push_back(numBits(i));
        }

        return result;
    }
};
