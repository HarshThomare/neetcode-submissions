class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0, currLength=0;
        unordered_set<char> uniqueStr{};

        for (int r = 0; r < s.size(); r++) {
            while(uniqueStr.find(s[r]) != uniqueStr.end()) {
                uniqueStr.erase(s[currLength]);
                currLength++;
            }
            uniqueStr.insert(s[r]);
            maxLength = max(maxLength, r-currLength+1);
        }
        return maxLength;
    }
};
