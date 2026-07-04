class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, minPrice=100;
        for (const auto& p : prices) {
            minPrice = min(minPrice, p);
            profit = max(p-minPrice, profit);
        }
        return profit;
    }
};
