class Solution {
public:
    int trap(vector<int>& height) {
        int maxLeft = 0, maxRight=0;
        int i = 0, j = height.size() - 1;
        int total = 0, amnt;

        while (i <= j) {
            if (maxLeft <= maxRight) {
                amnt = maxLeft - height[i];
                maxLeft = max(maxLeft, height[i]);
                i++;
            } else {
                amnt = maxRight - height[j];
                maxRight = max(maxRight, height[j]);
                j--;
            }
            total += (amnt > 0) ? amnt : 0;
        }

        return total;
    }
};
