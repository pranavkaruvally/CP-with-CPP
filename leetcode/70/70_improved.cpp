// Beats 100.0% in Runtime(0 ms) and 71.89% in Memory(5.94mb)
class Solution {
public:
    unsigned int climbStairs(int n) {
        unsigned int a = 1;
        unsigned int b = 2;
        unsigned int temp;

        for (int i=0; i<n-1; i++) {
            temp = a;
            a = b;
            b = temp + b;
        }

        return a;
    }
};
