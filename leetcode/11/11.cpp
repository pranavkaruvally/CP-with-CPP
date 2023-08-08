class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size() - 1;
        int result = 0;

        while (i < j) {
            int wat = min(height[i], height[j])*(j-i);
            result = max(result, wat);
            if (height[i] < height[j])
                i++;
            else
                j--;
        }

        return result;
    }
};
