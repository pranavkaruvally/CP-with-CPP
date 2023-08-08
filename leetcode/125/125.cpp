class Solution {
public:
    bool isNotAlnum(char c) {
        if (c >= 48 && c <= 57)
            return false;
        if (c >= 65 && c <= 90)
            return false;
        if (c >= 97 && c <= 122)
            return false;
        return true;
    }
    bool isJustCaseChange(char a, char b) {
        if (a == b)
            return true;
        if (a >= 48 && a <= 57)
            return false;
        if (b >= 48 && b <= 57)
            return false;
        if (a - 'a' == b - 'A' || a - 'A' == b - 'a')
            return true;

        return false;
    }
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length() - 1;

        while (i <= j) {
            if (isNotAlnum(s[i])) {
                i++;
                continue;
            }

            if (isNotAlnum(s[j])) {
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
