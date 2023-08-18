class Solution {
public:
    int trap(vector<int>& height) {
        int maxLeft = 0, maxRight=0;
        int i = 0, j = height.size() - 1;
        int total = 0;

        while (i <= j) {
            if (maxLeft <= maxRight) {
                maxLeft = max(maxLeft, height[i]);
                total += maxLeft - height[i];
                i++;
            } else {
                maxRight = max(maxRight, height[j]);
                total += maxRight - height[j];
                j--;
            }
        }

        return total;
    }
};
