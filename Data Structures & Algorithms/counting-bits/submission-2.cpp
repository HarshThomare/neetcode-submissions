#include <bits/stdc++.h>

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> sol;
        for (unsigned int i = 0; i <= n; i++){
            sol.push_back(__builtin_popcount(i));
        }
        return sol;
    }
};
