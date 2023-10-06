class Solution {
public:
    int countVowelStrings(int n) {
        int result = 1;
        for (int i=0; i<4; i++) {
           result *= (n + 4 - i);
        }
        return result/24;
        
    }
};
