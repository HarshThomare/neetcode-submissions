class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> anagrams;
        for (auto i : strs) {
            auto key = i;
            std::sort(key.begin(), key.end());
            anagrams[key].push_back(i);
        }

        vector<vector<string>> result;
        for (auto& v : anagrams) {
            result.push_back(v.second);
        }
        return result;
    }
};
