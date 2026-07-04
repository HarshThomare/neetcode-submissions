class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = 101;
        int profit = 0;
        for (auto& p : prices) {
            profit = max(profit, (p-buyPrice));
            buyPrice = min(p, buyPrice);
        }
        return profit;
    }
};
