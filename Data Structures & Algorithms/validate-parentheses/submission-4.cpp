class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stk{};
        if (s.size() % 2 == 1) return false; // Minimum of 2 elements and even
        bool isValid = true;
        char tmpVal;

        std::map<char, char> openers = {
            {']','['},
            {')','('},
            {'}','{'}
        };

        for (auto& c : s) {
            if (openers.count(c) == 0) {
                stk.push(c);
            }
            else if (stk.empty()) {return false;}
            else if (stk.top() != openers.at(c)) {
                return false; // newest opener doesn't have a closer
            }
            else {
                stk.pop();
            }
        }
        return stk.size() == 0;
    }
};