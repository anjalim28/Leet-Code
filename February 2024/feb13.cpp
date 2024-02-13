class Solution
{
public:
    string firstPalindrome(vector<string> &words)
    {
        string ans = "";
        for (auto i : words)
        {
            string temp = i;
            reverse(i.begin(), i.end());
            if (temp == i)
            {
                return temp;
            }
        }
        return ans;
    }
};