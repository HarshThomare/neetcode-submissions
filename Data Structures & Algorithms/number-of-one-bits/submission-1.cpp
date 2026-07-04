class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n != 0) {
            n&=(n-1); // removes right most 1 bit
            count++;
        }
        return count;
    }
};
