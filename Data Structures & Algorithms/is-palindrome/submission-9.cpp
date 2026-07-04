#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 0) return false;

        int first = 0;
        int last = s.size()-1;

        while (first < last) {
            // Starting pointer logic
            while (first < last && !std::isalnum(s[first])) {first++;}

            while (first < last && !std::isalnum(s[last])) {last--;}

            if (std::tolower(s[first]) != std::tolower(s[last])) return false;
            first++;
            last--;
        }
        return true;
    }
};
