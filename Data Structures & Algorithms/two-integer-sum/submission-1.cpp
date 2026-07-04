class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numsList{};
        int secondValue;

        for (int i = 0; i < nums.size(); i++) {
            secondValue = target - nums[i];
            if (numsList.count(secondValue) > 0) {
                return {numsList[secondValue], i};
            }
            numsList[nums[i]] = i;
        }
    }
};
