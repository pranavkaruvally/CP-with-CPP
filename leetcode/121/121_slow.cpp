class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prevMinSlide=-1, minSlide = prices[0];
        int maxProf = 0, prof=0;

        for (int i=0; i<prices.size() - 1; i++) {
            minSlide = min(minSlide, prices[i]);
            if (prevMinSlide == minSlide)
                continue;
            for (int j=i+1; j<prices.size(); j++) {
                maxProf = max(maxProf, prices[j] - minSlide);
            }
            prevMinSlide = minSlide;
        }

        return maxProf;
    }
};
