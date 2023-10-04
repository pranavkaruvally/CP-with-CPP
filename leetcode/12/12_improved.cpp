//Beats 100%(0 ms) in time
#define SIZE 13
static const int vals[SIZE] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
static const string_view symbs[SIZE] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

class Solution {
public:
    string intToRoman(int num) const {
        string roms = "";
        if (num == 0) return roms;

        for (int i=0; i<SIZE; i++) {
            if (num >= vals[i]) {
                while (num >= vals[i]) {
                    num -= vals[i];
                    roms += symbs[i];
                }
            }
        }

        return roms;
    }
};
