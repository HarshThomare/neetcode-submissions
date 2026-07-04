class Solution {
public:
    bool isPalindrome(string s) {
        int f = 0;
        int l = s.size();

        while(f < l) {
            while(f < l && !std::isalnum(s[f])) f++;
            while(f < l && !std::isalnum(s[l])) l--;
            if (tolower(s[f]) != tolower(s[l])) return false;
            f++;
            l--;
        }
        return true;
    }
};
