class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, int> alreadyHere;
        int newNum;
        while (n > 1) {
            if (n <= 6 || n == 8 || n == 9) return false;
            newNum = 0;
            while (n > 0) {
                newNum += (n%10)*(n%10);
                n /= 10;
            }
            n = newNum;
            if (alreadyHere[n] != 0)
                return false;
            alreadyHere[n]++;
        }

        return true;
    }
};
