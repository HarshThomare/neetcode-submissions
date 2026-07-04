#include <array>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> solution;
        map<array<int, 26>, vector<string>> anagram;

        for (auto& s : strs) {
            array<int, 26> tmp{};
            for (auto& c : s) {
                tmp[std::tolower(c)-'a']++;
            }
            anagram[tmp].push_back(s);
        }

        for (auto& [i, v] : anagram) {
            solution.push_back(v);
        }
        return solution;
    }
};
