class Solution {
public:
    bool isPalindrome(string s) {
        int f = 0;
        int l = s.size()-1;

        while(f < l) {
            while(f < l && !isalpha(s[f]) && !isdigit(s[f])) f++;
            while(f < l && !isalpha(s[l]) && !isdigit(s[l])) l--;
            if (tolower(s[f]) != tolower(s[l])) return false;
            f++;
            l--;
        }
        return true;
    }
};
