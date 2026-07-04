class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) {return 0;}

        sort(nums.begin(), nums.end()); // O(nlogn)
        int longestSeq = 1;
        int currSeq = 1;
        for (int x = 1; x < nums.size(); x++) { // O(n)
            if (nums[x-1]+1 == nums[x]) {
                currSeq++;
            }
            else if (nums[x-1] == nums[x]) {
                continue;
            }
            else {
                longestSeq = max(longestSeq, currSeq);
                currSeq = 1;
            }
        }
        return max(longestSeq, currSeq);
    }
};
