class Solution
{
public:
    int maxDepth(string s)
    {
        int n = s.length(), maxm = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                count++;
                maxm = max(maxm, count);
            }
            else if (s[i] == ')')
            {
                count--;
            }
        }
        return maxm;
    }
};