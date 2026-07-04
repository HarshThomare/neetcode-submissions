class Solution {
public:
    bool isPalindrome(string s) {
        if (s.length() < 1) return true;
        int f = 0;
        int l = s.length()-1;
        while(f < l) {
            while (f < l && !alphaNum(s[f])) f++;
            while (f < l && !alphaNum(s[l])) l--;
            if (tolower(s[f]) != tolower(s[l])) return false;
            f++;
            l--;
        }
        return true;
    }
    bool alphaNum(char c) {
        return (c >= 'A' && c <= 'Z' ||
                c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');
    }
};
