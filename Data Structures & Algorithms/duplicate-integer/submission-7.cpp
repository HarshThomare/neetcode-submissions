class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> deDup(nums.begin(), nums.end());
        return nums.size() != deDup.size();
    }
};