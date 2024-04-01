class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int n = s.length();
        vector<char> v;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == ' ')
            {
                continue;
            }
            else if (s[i] != ' ')
            {
                v.push_back(s[i]);
                if (n > 1 && i != 0)
                {
                    if (s[i - 1] == ' ')
                    {
                        return v.size();
                    }
                }
            }
        }
        return v.size();
    }
};