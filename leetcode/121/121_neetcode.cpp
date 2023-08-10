class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = prices[0];
        int result = 0;

        for (int price: prices) {
            lowest = min(lowest, price);
            result = max(result, price - lowest);
        }

        return result;
    }
};
