class Solution {
private:
    unordered_map<int, int> memo;
public:
    int mS(vector<int>& cost, int pos) {
        if (memo.find(pos) != memo.end()) return memo[pos];
        if (pos > cost.size() - 1) return 0;
        
        memo[pos] = cost[pos] + min(mS(cost, pos+1), mS(cost, pos+2));
        return memo[pos];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return min(mS(cost, 0), mS(cost, 1));
    }
};
