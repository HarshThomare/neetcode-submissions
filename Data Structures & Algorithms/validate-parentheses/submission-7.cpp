class Solution {
public:
    bool isValid(string s) {
        if (s.empty()) return true;
        if (s.size() % 2 == 1) return false;

        stack<char> stk{};

        for (const auto& i : s) {
            if (i == '[' || i == '{' || i == '(') {
                stk.push(i);
            }
            else if (stk.empty()) {
                return false;
            }
            else if (i == ')' && stk.top()== '(' || i == ']' && stk.top() == '[' || i == '}' && stk.top() == '{') {
                stk.pop();
            }
            else{
                return false;
            }
        }
        return stk.empty();
    }
};
