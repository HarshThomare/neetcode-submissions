class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> topElem;

        for (auto& n : nums) {
            topElem[n]++; // O(1) writes and lookups
        }

        std::vector<std::pair<int, int>> elems(topElem.begin(), topElem.end());

        std::sort(elems.begin(), elems.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;});
        int elemCount = 0;
        vector<int> solution;
        for (auto elem : elems) {
            elemCount++;
            solution.push_back(elem.first);
            if (elemCount == k)
                return solution;
        }
    }
};
