class Solution {
public:
    static int count(int n) {
        int count = 0;
        while (n>0) {
            n&=(n-1); // remove right most bit
            count++;
        }
        return count;
    }

    vector<int> countBits(int n) {
        vector<int> bits(n+1, 0); // 0 to n  
        for (int i = 1; i <= n; i++) {
            bits[i] = count(i);
        }
        return bits;
    }
};
