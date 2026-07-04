class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        std::unordered_map<char, int> anagramS;
        std::unordered_map<char, int> anagramT;
        for (size_t idx = 0; idx < t.size(); idx++) {
            anagramS[s.at(idx)]++;
            anagramT[t.at(idx)]++;
        }
        return (anagramS == anagramT);

    }
};
