class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        digits[digits.size() - 1]++;
        for (auto i = digits.rbegin(); i != digits.rend(); i++) {
            *i += carry;
            if (*i >= 10) {
                carry = *i/10;
                *i = (*i % 10);
            } else {
                return digits;
            }
        }
        if (carry > 0) {
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};
