class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        vector<int> s_set(26, 0);
        vector<int> t_set(26, 0);

        for (int i = 0; i < s.size(); i++) {
            s_set[std::tolower(s[i]) - 'a']++;
            t_set[std::tolower(t[i]) - 'a']++;
        }
        return s_set == t_set;
    }
};
