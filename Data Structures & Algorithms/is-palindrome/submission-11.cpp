class Solution {
public:
    bool isPalindrome(string s) {
        string filtered_str = "";
        for (char c : s) {
            if (std::isalnum(c)) {
                filtered_str += std::tolower(c);
            }
        }
        return filtered_str == string(filtered_str.rbegin(), filtered_str.rend());
    }
};
