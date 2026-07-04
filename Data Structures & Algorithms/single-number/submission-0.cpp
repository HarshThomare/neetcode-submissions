class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sol = 0;
        for (auto& n : nums) {
            sol ^= n;
        }
        return sol;
    }
};
