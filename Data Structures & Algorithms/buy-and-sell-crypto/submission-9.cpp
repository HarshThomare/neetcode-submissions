class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int profit = 0;
        for (int p : prices) {
            profit = max(profit, (p-buyPrice));
            buyPrice = min(p, buyPrice);
        }
        return profit;
    }
};
