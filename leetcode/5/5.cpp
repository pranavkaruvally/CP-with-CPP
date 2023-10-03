class Solution {
public:
    string longestPalindrome(string s) {
        int resLen = 0;
        string result;
        for (int i=0; i<s.length(); i++) {
            //Covering odd palindromes
            int l = i, r = i;
            while (l >= 0 && r < s.length() && s[l] == s[r]) {
                if (r - l + 1 > resLen) {
                    resLen = r - l + 1;
                    result = s.substr(l, resLen);
                }
                l--, r++;
            }

            //Covering even palindromes
            l = i, r = i+1;
            while (l >= 0 && r < s.length() && s[l] == s[r]) {
                if (r - l + 1 > resLen) {
                    resLen = r - l + 1;
                    result = s.substr(l, resLen);
                }
                l--, r++;
            }
        }

        return result;
    }
};
