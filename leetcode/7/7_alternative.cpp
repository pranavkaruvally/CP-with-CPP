class Solution {
public:
    int reverse(int x) {
        if (x == -((uint32_t)1 << 31)) return 0;
        bool negative = false;
        uint32_t absoluteX;
        uint32_t limit = ((uint32_t)1 << 31) - 1;
        uint32_t res = 0;
        if (x < 0) {
            negative = true;
            absoluteX = ~x + 1; //2's compliment
        } else {
            absoluteX = x;
        }
        while (absoluteX > 0) {
            if (res > limit/10) return 0;
            res = res*10 + absoluteX%10;
            if (res > limit) return 0;
            absoluteX /= 10;
        }
        if (negative) return -res;
        return res;
    }
};
