class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0 , a = prices[0];

        for(int i = 0 ;i < prices.size() ; i++){
            a = min(a,prices[i]);
            max_profit = max(max_profit,(prices[i] - a));
        }

        return max_profit;

    }
};