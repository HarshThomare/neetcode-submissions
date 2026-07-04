class Solution {
public:
    bool isAnagram(string s, string t) {
       if (s.size() != t.size()) return false;
       std::array<int, 26> count{};

       for (int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
       }
        return std::all_of(count.begin(), count.end(),
                [](int i){return i==0;});
    }
};
