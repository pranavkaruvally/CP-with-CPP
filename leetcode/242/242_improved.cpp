class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        unordered_map<char, int> dict;

        for (int i=0; i<s.length(); i++) {
            dict[s[i]]++;
            dict[t[i]]--;
        }

        for (int i=0; i<s.length(); i++)
            if (dict[s[i]])
                return false;

        return true;

    }
};
