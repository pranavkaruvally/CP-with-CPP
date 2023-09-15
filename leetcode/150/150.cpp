class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int stack[tokens.size()];
        int top = -1;
        for (string el: tokens) {
            if (el == "+" || el == "-" || el == "/" || el == "*") {
                int b = stack[top--];
                int a = stack[top--];
                top++;
                switch(el[0]) {
                    case '+':
                        stack[top] = a + b;
                        break;
                    case '-':
                        stack[top] = a - b;
                        break;
                    case '*':
                        stack[top] = a * b;
                        break;
                    case '/':
                        stack[top] = a / b;
                        break;
                }
            } else {
                top++;
                stack[top] = stoi(el);
            }
        }

        return stack[top];
    }
};
