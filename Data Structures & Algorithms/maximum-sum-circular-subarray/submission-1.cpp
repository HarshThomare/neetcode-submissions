class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        // Wrapping case: total - minSum
        // Non-wrapping: maxSum
        // negative max: single element
        int globalMin = nums[0], globalMax = nums[0];
        int currMax = 0, currMin = 0, total = 0;

        for (auto& i : nums) {
            total += i;
            currMax = std::max(i, currMax+i);
            currMin = std::min(i, currMin+i);
            globalMin = std::min(globalMin, currMin);
            globalMax = std::max(globalMax, currMax);
        }
        return globalMax > 0 ? std::max(globalMax, total-globalMin) : globalMax;
    }
};