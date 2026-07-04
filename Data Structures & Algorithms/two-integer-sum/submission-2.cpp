class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int otherVal, index = 0;
        unordered_map<int, int> val;

        for (const auto& n : nums) {
            otherVal = target - n;
            if (val.count(otherVal) > 0) {
                return {val[otherVal], index};
            }
            val[n] = index++;
        }
    }
};
