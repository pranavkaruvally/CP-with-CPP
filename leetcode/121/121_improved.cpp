class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0], maxi=prices[0];
        int maxDiff = 0;

        for (int i=1; i<prices.size(); i++) {
            if (prices[i] < mini) {
                maxi = prices[i];
                mini = prices[i];
            } else if(prices[i] > maxi) {
                maxi = prices[i];
            }
            maxDiff = max(maxDiff, maxi-mini);
        }

        return maxDiff;
    }
};
