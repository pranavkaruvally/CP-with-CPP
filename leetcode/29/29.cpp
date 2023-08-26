// Beats 100%(0ms) of the solutions in time complexity

class Solution {
public:
    long int divide(long int dividend, long int divisor) {
        if (dividend == -2147483648 && divisor == -1)
            return 2147483647;

        if (divisor == 1) {
            return dividend;
        }
        if (divisor == -1) {
            return -dividend;
        }

        bool negative = false;

        if (dividend < 0 && divisor > 0) {
            dividend = -dividend;
            negative = true;
        } else if (dividend > 0 && divisor < 0) {
            divisor = -divisor;
            negative = true;
        } else if (dividend < 0 && divisor < 0) {
            dividend = -dividend;
            divisor = -divisor;
        }

        long int quotient = 0, expected_quotient, prev_exp_quot;
        long fake_divisor, prev_fake_divisor;

        while (dividend >= divisor) {
            prev_exp_quot = 0;
            expected_quotient=1;
            prev_fake_divisor=divisor;
            fake_divisor = divisor;
            while (dividend >= fake_divisor) {
                prev_exp_quot = expected_quotient;
                expected_quotient += expected_quotient;
                prev_fake_divisor = fake_divisor;
                fake_divisor += fake_divisor;
            }
            quotient += prev_exp_quot;
            dividend -= prev_fake_divisor;
        }

        if (negative)
            return -quotient;
        return quotient;
    }
};
