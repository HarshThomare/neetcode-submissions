class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        std::map<char, int> s_map, t_map;
        for (int i = 0; i < s.size(); i++) {
            if (s_map.count(s[i])){
                s_map[s[i]]++;
            }
            else {
                s_map[s[i]] = 1;
            }
            
            if (t_map.count(t[i])){
                t_map[t[i]]++;
            }
            else {
                t_map[t[i]] = 1;
            }
        }
        return s_map == t_map;
    }
};
