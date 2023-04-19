<<<<<<< HEAD
class Solution {
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n = piles.size();
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= k; j++) {
                int cur = 0;
                for (int x = 0; x < min(j, (int)piles[i-1].size()); x++) {
                    cur += piles[i-1][x];
                    dp[i][j] = max(dp[i][j], cur + dp[i-1][j-x-1]);
                }
                dp[i][j] = max(dp[i][j], dp[i-1][j]);
            }
        }
        return dp[n][k];
    }
=======
class Solution {
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n = piles.size();
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= k; j++) {
                int cur = 0;
                for (int x = 0; x < min(j, (int)piles[i-1].size()); x++) {
                    cur += piles[i-1][x];
                    dp[i][j] = max(dp[i][j], cur + dp[i-1][j-x-1]);
                }
                dp[i][j] = max(dp[i][j], dp[i-1][j]);
            }
        }
        return dp[n][k];
    }
>>>>>>> 4f8dc421c25710817d68f1dbfb465179d06fa6d0
};