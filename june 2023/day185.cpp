class Solution
{
public:
    int maxProfit(vector<int> &prices, int fee)
    {
        int n = prices.size();
        int maxm = 0;
        int buy = prices[0] + fee;
        for (int i = 1; i < n; i++)
        {
            if (prices[i] + fee < buy)
            {
                buy = prices[i] + fee;
            }
            else if (prices[i] > buy)
            {
                maxm += prices[i] - buy;
                buy = prices[i];
            }
        }
        return maxm;
    }
};