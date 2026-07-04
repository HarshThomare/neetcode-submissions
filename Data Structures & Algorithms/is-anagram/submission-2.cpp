class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        std::unordered_map<char, int> s_set{};
        std::unordered_map<char, int> t_set{};

        for (int i = 0; i < s.size(); i++) { 
            s_set[s[i]]++;
            t_set[t[i]]++;
        }

        return s_set == t_set;
    }
};
