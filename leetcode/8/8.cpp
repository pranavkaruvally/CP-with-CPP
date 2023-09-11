//Beats 100% of C++ users in Runtime(0ms)
//Beats 98.25% of C++ users in Memory(6.18MB)

class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        long long unsigned int res = 0;
        bool negative = false;
        if (s.length() == 0) return 0;
        while (s[i] == ' ') i++;
        if (s[i] == '-') {
            negative = true;
            i++;
        } else if (s[i] == '+') {
            i++;
        }

        while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
            res = res*10 + (s[i] - 48);
            if (negative) {
                if (res > 2147483648) return -2147483648;
            } else {
                if (res > 2147483647) return 2147483647;
            }
            i++;
        }

        if (negative)
            return -res;
        return res;
    }
};
