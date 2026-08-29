class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;  // Buy pointer
        int right = 1; // Sell pointer
        int maxProfit = 0;

        while (right < prices.size()) {
            if (prices[left] < prices[right]) {
                int profit = prices[right] - prices[left];
                maxProfit = max(maxProfit, profit);
            } 
            else {
                // Found a cheaper buying day
                left = right;
            }
            right++;
        }

        return maxProfit;
    }
};