class Solution {
public:
    int reverse(int x) {
        if (x == -2147483648) return 0;
        bool negative=false;
        if (x < 0) { negative=true; x=-x; }

        if (log10(x) >= 9 && x%10 > 2) return 0;

        unsigned int rev = 0;
        while (x > 0) {
            rev = rev*10 + x%10;
            x/=10;
        }

        if (rev >= 2147483648) return 0;

        if (negative) return -rev;
        return rev;
    }
};
