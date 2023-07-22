class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        queue<char> que;
        map<char, bool> presentTable;
        int longest = 0, curr = 0;

        for (int i=0; i<s.length();) {
            auto it = presentTable.find(s[i]);
            if (it == presentTable.end() || it->second == false) {
            //If element not present in presentTable
                que.push(s[i]);
                presentTable[s[i]] = true;
                curr++, i++;
                if (curr > longest)
                    longest = curr;
            } else {
                presentTable[que.front()] = false;
                que.pop();
                curr--;
            }
        }

        return longest;
    }
};
