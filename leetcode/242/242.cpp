class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        unordered_map<char, int> dict1, dict2;

        for (int i=0; i<s.length(); i++)
            dict1[s[i]]++;

        for (int i=0; i<t.length(); i++)
            dict2[t[i]]++;

        for (int i=0; i<s.length(); i++)
            if (dict1[s[i]] != dict2[s[i]])
                return false;

        return true;

    }
};
