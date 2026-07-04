class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> b;
        for (unsigned int i = 0; i <= n; i++) {
            b.push_back(std::popcount(i));
        }
        return b;
    }
};
