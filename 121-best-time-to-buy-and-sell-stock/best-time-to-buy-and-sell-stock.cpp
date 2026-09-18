class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int left = 0;       // buying day
        int maxProfit = 0;

        for (int right = 1; right < prices.size(); right++) {

            // Found a cheaper buying price
            if (prices[right] < prices[left]) {
                left = right;
            }

            // Calculate profit
            else {
                int profit = prices[right] - prices[left];

                maxProfit = max(maxProfit, profit);
            }
        }

        return maxProfit;
    }
};