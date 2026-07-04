class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stk{};
        if (s.size() % 2 == 1) return false; // Minimum of 2 elements and even
        bool isValid = true;
        char tmpVal;

        for (auto& c : s) {
            switch (c) {
                case '}':
                    if (stk.empty()) return false;
                    tmpVal = stk.top();
                    stk.pop();
                    isValid = (tmpVal == '{') ? true : false;
                    break;
                case ')':
                    if (stk.empty()) return false;
                    tmpVal = stk.top();
                    stk.pop();
                    isValid = (tmpVal == '(') ? true : false;
                    break;
                case ']':
                    if (stk.empty()) return false;
                    tmpVal = stk.top();
                    stk.pop();
                    isValid = (tmpVal == '[') ? true : false;
                    break;
                default:
                    //opening tags
                    stk.push(c);
                    break;
            }
            if (!isValid) return false;
        }
        return stk.empty();
    }
};