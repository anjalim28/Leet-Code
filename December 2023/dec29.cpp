class Solution
{
public:
    int minDifficulty(vector<int> &jobDifficulty, int d)
    {
        int jobs = jobDifficulty.size();
        if (jobs < d)
            return -1;
        vector<vector<int>> dp(d, vector<int>(jobs, 0));

        dp[0][0] = jobDifficulty[0];
        for (int i = 1; i < jobs; i++)
            dp[0][i] = max(dp[0][i - 1], jobDifficulty[i]);
        for (int days = 1; days < d; days++)
        {
            for (int i = days; i < jobs; i++)
            {
                int localMax = jobDifficulty[i];
                dp[days][i] = INT_MAX;

                for (int j = i; j >= days; j--)
                {
                    localMax = max(localMax, jobDifficulty[j]);
                    dp[days][i] = min(dp[days][i], dp[days - 1][j - 1] + localMax);
                }
            }
        }
        return dp[d - 1][jobs - 1];
    }
};