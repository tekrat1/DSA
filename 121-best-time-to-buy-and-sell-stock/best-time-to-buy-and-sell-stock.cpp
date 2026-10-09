
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int window = 0;
        int profit = 0;
        int max_profit = 0;

        int i = 0, j = 0;
        int min_price = INT_MAX;

        while (j < n) {

            // Expand the window
            window = j - i + 1;

            // Track the minimum buying price
            min_price = min(min_price, prices[j]);

            // Calculate profit by selling today
            profit = prices[j] - min_price;

            // Update maximum profit
            max_profit = max(max_profit, profit);

            j++;
        }

        return max_profit;
    }
};
