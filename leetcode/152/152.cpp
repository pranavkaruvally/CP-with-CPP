class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProd = nums[0];
        int maxP = 1, minP = 1;
        int prevMinP;

        for (int i=0; i<n; i++) {
            if (nums[i] == 0) {
                minP = 1, maxP = 1;
                maxProd = max(maxProd, 0);
            } else {
                prevMinP = minP;
                minP = min(nums[i], min(nums[i]*maxP, nums[i]*prevMinP));
                maxP = max(nums[i], max(nums[i]*maxP, nums[i]*prevMinP));
                maxProd = max(maxProd, maxP);
            }
        }

        return maxProd;
    }
};
