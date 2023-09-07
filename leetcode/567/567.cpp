class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;
        unordered_map<char, int> count1, count2;
        for (int i=0; i<s1.length(); i++) count1[s1[i]]++, count2[s2[i]]++;
        int j;
        for (j=0; j<s1.length(); j++) {
            if (count1[s1[j]] != count2[s1[j]]) break;
        }

        if (j == s1.length()) return true;

        for (int i=1; i <= s2.length() - s1.length(); i++) {
            count2[s2[i-1]]--, count2[s2[s1.length() + i -1]]++;
            for (j=0; j<s1.length(); j++) {
                if (count1[s1[j]] != count2[s1[j]]) break;
            }

            if (j == s1.length()) return true;
        }
        return false;
    }
};
