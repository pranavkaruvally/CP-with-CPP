class Solution {
public:
    bool isValid(string s) {
        vector<char> mystack;
        char crosscheck;

        for (char symbol : s) {
            switch (symbol) {
                case '(':
                case '{':
                case '[':   mystack.push_back(symbol);
            }

            if (mystack.size() == 0)
                return false;

            if (symbol == ')' || symbol == '}' || symbol == ']') {
                crosscheck = mystack[mystack.size()-1];
                mystack.pop_back();
            }

            if (symbol == ')' && crosscheck != '(')
                return false;
            if (symbol == '}' && crosscheck != '{')
                return false;
            if (symbol == ']' && crosscheck != '[')
                return false;
        }

        if (mystack.size() == 0)
            return true;
        return false;
    }
};
