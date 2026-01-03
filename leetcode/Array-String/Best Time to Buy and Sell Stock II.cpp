class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxx = 0, l = 0, r = 0, s = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < prices[r]) {
                s += maxx;
                maxx = 0;
                l = i;
            }
            if (prices[i] < prices[l])
                l = i;
            maxx = max(maxx, (prices[i] - prices[l]));
            r = i;
        }
        s += maxx;
        return max(maxx, s);
    }
};