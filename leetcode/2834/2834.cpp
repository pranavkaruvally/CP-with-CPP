class Solution {
public:
  long long minimumPossibleSum(int n, int target) {
    unordered_set<int> nums;
    nums.insert(1);
    long long sum = 1;
    long long count = 1;
    int i = 2;
    while (count < n) {
      if (nums.count(target - i) > 0) {
        i++;
        continue;
      } else {
        nums.insert(i);
        sum += i;
        count++;
        i++;
      }
    }

    return sum;

    }
};
