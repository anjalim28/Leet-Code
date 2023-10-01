class Solution
{
public:
    bool isPalindrome(int x)
    {
        string s = to_string(x);
        int count = 0;
        string str = "";
        int n = s.length();
        for (int i = n - 1; i >= 0; i++)
        {
            str[i] = s[i];
            if (str[i] == s[i])
            {
                count++;
            }
        }
        if (count == n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};