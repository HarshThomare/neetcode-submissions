class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());

        int longest = 0;

        for (auto& i : nums) {
            if (numSet.find(i-1) == numSet.end()) // find first val in sequence
            {
                int length = 1;
                while(numSet.find(i+length) != numSet.end()) length++;
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
