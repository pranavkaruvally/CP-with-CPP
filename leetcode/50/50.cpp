class Solution {
public:
    double myPow(double x, double n, double prod=1) {
        if (x == 0) return 0;
        if (x == 1) return 1;
        if (n == 0) return prod;
        if (n < 0) return myPow(1/x, -n);
        if (n >= 1000) {
            double exp = x*x*x*x*x*x*x*x*x*x;
            exp = exp*exp*exp*exp*exp*exp*exp*exp*exp*exp;
            exp = exp*exp*exp*exp*exp*exp*exp*exp*exp*exp;
            return myPow(x, n-1000, prod*exp);
            }
        if (n >= 100) {
            double exp = x*x*x*x*x*x*x*x*x*x;
            exp = exp*exp*exp*exp*exp*exp*exp*exp*exp*exp;
            return myPow(x, n-100, prod*exp);
        }
        return myPow(x, n-1, prod*x);
    }
};
