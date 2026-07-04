class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroCnt = 0, total = 1;
        for (auto& i : nums) {
            if (i == 0) {
                zeroCnt++;
            }
            else {
                total *= i;
            }
        }

        if (zeroCnt > 1) {
            return vector<int>(nums.size(), 0);
        }

        vector<int> sol(nums.size());
        for (size_t i = 0; i < nums.size(); i++) {
            if (zeroCnt > 0) {
                sol[i] = (nums[i] == 0) ? total : 0;
            }
            else {
                sol[i] = total / nums[i];
            }
        }
        return sol;
    }
};
