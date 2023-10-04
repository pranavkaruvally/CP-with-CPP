class Solution {
private:
    auto recursion(int num, string roms) {
        if (num == 0) return roms;

        if (num >= 1000) {
            num -= 1000;
            roms += 'M';
            return recursion(num, roms);
        }
        if (num >= 900) {
            num -= 900;
            roms += "CM";
            return recursion(num, roms);
        }
        if (num >= 500) {
            num -= 500;
            roms += 'D';
            return recursion(num, roms);
        }
        if (num >= 400) {
            num -= 400;
            roms += "CD";
            return recursion(num, roms);
        }
        if (num >= 100) {
            num -= 100;
            roms += 'C';
            return recursion(num, roms);
        }
        if (num >= 90) {
            num -= 90;
            roms += "XC";
            return recursion(num, roms);
        }
        if (num >= 50) {
            num -= 50;
            roms += 'L';
            return recursion(num, roms);
        }
        if (num >= 40) {
            num -= 40;
            roms += "XL";
            return recursion(num, roms);
        }
        if (num >= 10) {
            num -= 10;
            roms += 'X';
            return recursion(num, roms);
        }
        if (num >= 9) {
            num -= 9;
            roms += "IX";
            return recursion(num, roms);
        }
        if (num >= 5) {
            num -= 5;
            roms += 'V';
            return recursion(num, roms);
        }
        if (num >= 4) {
            num -= 4;
            roms += "IV";
            return recursion(num, roms);
        }
        num--;
        roms += "I";
        return recursion(num, roms);
    }
public:
    string intToRoman(int num) {
        return recursion(num, "");
    }
};
