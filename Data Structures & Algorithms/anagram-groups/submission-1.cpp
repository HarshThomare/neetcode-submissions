#include <array>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int, 26>, vector<string>> anagrams;

        for (const string& s : strs) {
            array<int, 26> tempMap{}; // Zero-initialized
            for (char c : s) {
                tempMap[c - 'a']++;
            }
            // map::operator[] will create the vector if the key doesn't exist
            anagrams[tempMap].push_back(s);
        }

        vector<vector<string>> result;
        result.reserve(anagrams.size()); // Optimization: reserve space
        
        for (auto& [counts, group] : anagrams) {
            result.push_back(move(group)); // move avoids copying the inner vectors
        }
        
        return result;
    }
};
