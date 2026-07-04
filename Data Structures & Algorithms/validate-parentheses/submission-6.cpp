class Solution {
public:
    bool isValid(string s) {
        if (s.empty()) return true;
        else if (s.size() % 2 == 1) return false;
        
        static std::unordered_map<char, char> p {
            {']', '['},
            {')', '('},
            {'}', '{'}
        };
        stack<char> stk{};
        for (auto& i : s) {
            if (p.count(i) == 0) { // opener
                stk.push(i);
            }
            else if (stk.empty()) { // stk is empty, instant fail
                return false;
            }
            else if (stk.top() == p[i]) { //opener and closer match
                stk.pop();
            }
            else { // opener and closer don't match; fail
                return false;
            }
        }
        return stk.empty();
    }
};
