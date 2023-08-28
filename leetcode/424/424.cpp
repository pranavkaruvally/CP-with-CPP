class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, right = 0;
        int res = 0, m = 0;
        unordered_map<char, int> count;

        while (right < s.length()) {
            int windowSize = right - left + 1;
            m = max(m, count[s[right]] + 1);
            if (windowSize - m <= k) {
                res = max(res, windowSize);
                count[s[right]]++;
                right++;
            }
            else {
                count[s[left]]--;
                left++;
            }
        }

        return res;
    }
};
