class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> stack;
        for (string el: tokens) {
            if (el == "+" || el == "-" || el == "/" || el == "*") {
                int b = stack.back();
                stack.pop_back();
                int a = stack.back();
                stack.pop_back();
                switch(el[0]) {
                    case '+':
                        stack.push_back(a + b);
                        break;
                    case '-':
                        stack.push_back(a - b);
                        break;
                    case '*':
                        stack.push_back(a * b);
                        break;
                    case '/':
                        stack.push_back(a / b);
                        break;
                }
            } else {
                stack.push_back(stoi(el));
            }
        }

        return stack.back();
    }
};
