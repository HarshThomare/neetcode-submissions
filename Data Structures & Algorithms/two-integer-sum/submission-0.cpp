class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> arr;
        
        for (size_t idx = 0; idx < nums.size(); idx++) {
            int diff = target - nums[idx];
            if (arr.find(diff) != arr.end()) {
                return {arr[diff], idx};
            }
            arr.insert({nums[idx], idx});

        }
        return {};
    }
};
