class Solution {
private:
    unordered_map<string, int> myMap = {
        {"I", 1}, {"IV", 4}, {"V", 5},
        {"IX", 9}, {"X", 10}, {"XL", 40},
        {"L", 50}, {"XC", 90}, {"C", 100},
        {"CD", 400}, {"D", 500}, {"CM", 900}, {"M", 1000}
    };
public:
    int romanToInt(string s) {
        if (s.length() == 1)
            return myMap[s.substr(0, 1)];

        int result = 0;
        for (int i=s.length() - 1; i >= 1; i--) {
            string consid = s.substr(i-1, 2);
            if (myMap.find(consid) != myMap.end()) {
                result += myMap[consid];
                i--;
            } else {
                result += myMap[s.substr(i, 1)];
            }
        }
        if (myMap.find(s.substr(0, 2)) == myMap.end())
            result += myMap[s.substr(0, 1)];

        return result;
    }
};
