class Solution {
public:
    bool isPalindrome(long long int x) {
        if (x < 0)
            return false;
        
        long long int copy = x, pal=0;
        while (copy > 0) {
            pal = pal*10 + copy%10;
            copy/=10;
        }
        if (x == pal)
            return true;
        return false;
    }
};
