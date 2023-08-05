class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> present(nums.begin(), nums.end());
        int streak=0, longestStreak=0;

        for (int i: nums) {
            if (!present.count(i-1)) {
                while (present.count(i+streak))
                    streak++;
                longestStreak = max(streak, longestStreak);
                streak = 0;
            }
        }
        return longestStreak;
    }
};
