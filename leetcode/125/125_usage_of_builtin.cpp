class Solution {
public:
    bool isJustCaseChange(char a, char b) {
        if (a == b)
            return true;
        if (a >= '0' && a <= '9')
            return false;
        if (b >= '0' && b <= '9')
            return false;
        if (abs(a - b) == 'a' - 'A')
            return true;

        return false;
    }
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length() - 1;

        while (i <= j) {
            if (!iswalnum(s[i])) {
                i++;
                continue;
            }

            if (!iswalnum(s[j])) {
                j--;
                continue;
            }

            if (isJustCaseChange(s[i], s[j])) {
                i++;
                j--;
            } else {
                return false;
            }
        }

        return true;
    }
};
