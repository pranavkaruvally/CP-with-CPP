class Solution {
public:
    int trap(vector<int>& height) {
        int maxLeft=0;
        int total = 0;
        unordered_map<int, int> maxRight;
        int maxx = 0;

        for (int i=height.size()-1; i>=0; i--) {
            maxRight[i] = maxx;
            maxx = max(maxx, height[i]);
        }

        for (int i=0; i<height.size(); i++) {
            int amnt = min(maxLeft, maxRight[i]) - height[i];
            total += (amnt > 0) ? amnt : 0;
            if (height[i] > maxLeft)
                maxLeft = height[i];
        }
        return total;
    }
};
