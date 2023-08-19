class Solution
{
public:
    int n;
    unordered_set<string> str;
    int dp[301];

    bool solve(int idx, string &s)
    {
        if (idx >= n)
        {
            return true;
        }

        if (dp[idx] != -1)
        {
            return dp[idx];
        }
        if (str.find(s) != str.end())
        {
            return true;
        }

        for (int l = 1; l <= n; l++)
        {
            string temp = s.substr(idx, l);
            if (str.find(temp) != str.end() && solve(idx + l, s))
            {
                return dp[idx] = true;
            }
        }
        return dp[idx] = false;
    }
    bool wordBreak(string s, vector<string> &wordDict)
    {
        n = s.length();

        memset(dp, -1, sizeof(dp));
        for (string &word : wordDict)
        {
            str.insert(word); // string present in dictionary or not
        }

        return solve(0, s);
    }
};