class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2)
            return 0;
        
        int minSoFar = 2147483646, maxProfit = 0;
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < minSoFar)
                minSoFar = prices[i];
            if(prices[i]-minSoFar > maxProfit)
                maxProfit = prices[i]-minSoFar;
        }
        return maxProfit;
    }
};