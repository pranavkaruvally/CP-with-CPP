class Solution {
public:
    int numDecodings(string s) {
        if (s[0] == '0') return 0;
        int n = s.length();
        if (n == 1) return 1;
        int prev = 0, curr = 0, next = 1;
        curr = (s[n-1] == '0') ? 0 : 1;

        for (int i=n-2; i>=0; i--) {
            if (s[i] == '0') {
            } else if (s[i] == '1' || (s[i] == '2' && s[i+1] <= '6')) {
                prev = curr + next;
            } else {
                prev = curr;
            }
            next = curr;
            curr = prev;
            prev = 0;
        }

        return curr;
    }
};
