class Solution {
public:
    unsigned long int mySqrt(int x) {
        unsigned long int low = 0, high = x, mid = 0;

        while (low <= high) {
            mid = low + (high - low) / 2;
            if (mid*mid == x) {
                return mid;
            }
            if (mid*mid > x) {
                high = mid-1;
            } else {
                low = mid+1;
            }
        }

        if (mid*mid < x)
            return mid;
        return mid-1;
    }
};
