class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxSum = -1000;

        for (auto& i : nums) {
            currSum = std::max(currSum+i, i);
            maxSum = std::max(maxSum, currSum);
        }
        return maxSum;
    }
};
