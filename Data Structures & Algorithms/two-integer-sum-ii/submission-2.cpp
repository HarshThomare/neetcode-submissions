class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> numMap;
        for (int i = 0; i < numbers.size(); i++) {
            int tmp = target - numbers[i]; // find diff pair value
            if (numMap.count(tmp)) { // The value exists
                return { numMap[tmp] , i+1 };
            }
            numMap[numbers[i]] = i+1;
        }

        return {};
    }
};
