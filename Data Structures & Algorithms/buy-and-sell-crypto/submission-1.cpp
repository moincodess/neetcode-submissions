class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int maxProfit = 0;

        for(int i = 0 ; i < prices.size(); i++){
            if(prices[i]<buy)
                buy = prices[i];

                int profit = prices[i] - buy;

             maxProfit = max(profit, maxProfit);
            
            
        }
        return maxProfit;
    }
};
