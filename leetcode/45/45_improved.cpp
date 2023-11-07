class Solution {
public:
    static int jump(const vector<int>& nums) {
        int prev = 0, curr = 0;
        const int n = nums.size();
        int count = 0;

        while (curr < n-1) {
            int temp = curr;
            for (int i = prev; i <= temp && i < n; i++) {
                curr = max(curr, i+nums[i]);
                if (curr >= n-1) return count+1;
            }
            if (curr != temp) count++;
            prev = temp;
        }

        return count;
    }
};
