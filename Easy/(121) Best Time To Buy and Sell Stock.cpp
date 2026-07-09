class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX, maxprof = INT_MIN;
        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i] < mini)
            {
                mini = prices[i];
            }
            if(prices[i] - mini > maxprof)
            {
                maxprof = prices[i] - mini;
            }
        }
        return maxprof;
    }
};