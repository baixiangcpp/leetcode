class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2)
            return 0;
        int profit = 0;
        int minprice = prices[0];
        for(int i=0;i<prices.size();++i)
        {
            profit = max(prices[i]-minprice,profit);
            minprice = min(minprice,prices[i]);
        }
        return profit;
    }
};
