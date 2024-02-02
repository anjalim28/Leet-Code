class Solution
{
public:
    vector<int> sequentialDigits(int low, int high)
    {
        vector<int> ans;
        string c = "123456789";
        int n = c.length();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int curr = stoi(c.substr(i, j - i));
                if (curr <= high && curr >= low)
                {
                    ans.push_back(curr);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
