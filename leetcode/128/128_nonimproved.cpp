class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> present;

        for (int i: nums)
            present[i] = true;

        int longestStreak = 0;
        int streak = 0;

        for (auto i: nums) {
            if (!present[i-1]) {
                while (present[i+streak]) {
                    streak++;
                    longestStreak = max(streak, longestStreak);
                }
                streak = 0;
            }
        }

        return longestStreak;
    }
};
