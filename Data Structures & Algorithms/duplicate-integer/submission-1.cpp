class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> mNumsTracker;
        for (auto i: nums) {
            if (mNumsTracker.find(i) != mNumsTracker.end())
                return true;
            else
                mNumsTracker[i] = 1;
        }
        return false;
    }

};