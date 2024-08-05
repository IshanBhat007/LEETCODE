class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (char i : s) {
            if (i == '(' || i == '{' || i == '[') {
                stack.push(i);
            } else if (i == ')' || i == '}' || i == ']') {
                if (stack.empty()) {
                    return false;
                }
                if ((i == ')' && stack.top() != '(') ||(i == '}' && stack.top() != '{') || (i == ']' && stack.top() != '[')) {
                    return false;
                }
                stack.pop();
            }
        }
        return stack.empty();
    }
};
