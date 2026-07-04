class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        auto n = nums.size();
        vector<int> sol(n, 1);
        // Left to right
        for (size_t i = 1; i < n; i++) {
            sol[i] = sol[i-1] * nums[i-1];
        }

        // right to left
        int postFix = 1;
        for (int i = n-1; i >= 0; i--) {
            sol[i] *= postFix;
            postFix *= nums[i];
        }
        return sol;
    }
};
