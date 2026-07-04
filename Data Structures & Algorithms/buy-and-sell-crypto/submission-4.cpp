class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = 101;

        for (const auto& p : prices) {
            maxProfit = max((p-minPrice), maxProfit);
            minPrice = min(p, minPrice);
        }
        return maxProfit;
    }
};
