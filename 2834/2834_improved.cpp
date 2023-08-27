class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        long long count = min(n, target/2);
        long long sum = (count)*(count+1)/2;
        if (count < n) {
          long long k = (n - count);
          sum += k*target + k*(k-1)/2;
        }
        return sum;
    }
};
