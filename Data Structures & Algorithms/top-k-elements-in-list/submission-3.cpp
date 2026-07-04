class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count{};
        vector<int> sol{};

        for (const auto& i : nums) {
            count[i]++;
        }
        vector<std::pair<int, int>> count2(count.begin(), count.end());
        std::sort(count2.begin(), count2.end(), 
            [](const std::pair<int, int>& l, const std::pair<int, int> r){return l.second > r.second;});

        int idx = 0;
        for (const auto& i : count2) {
            if (idx++ == k) return sol;
            sol.push_back(i.first);

        }
        return sol;
    }
};
