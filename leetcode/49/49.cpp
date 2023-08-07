class Solution {
public:
    string hash(string s) {
        string hash;
        for (int j=0; j<26; j++)
            hash.push_back('0');
        for (char i: s)
            hash[i-'a']++;
        return hash;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> groups;
        unordered_set<string> groupIndices;

        for (string i: strs) {
            string thisHash = hash(i);
            groups[thisHash].push_back(i);
            groupIndices.insert(thisHash);
        }

        for (string index: groupIndices) {
            result.push_back(groups[index]);
        }

        return result;
    }
};
