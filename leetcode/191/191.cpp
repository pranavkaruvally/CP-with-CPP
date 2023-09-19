//Beats 100% of C++ solutions in time (0 ms)
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result = 0;
        while (n > 0) {
            result += n%2;
            n = n >> 1;
        }

        return result;
    }
};
