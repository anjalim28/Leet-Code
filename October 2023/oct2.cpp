class Solution
{
public:
    bool winnerOfGame(string colors)
    {
        int n = colors.length(), cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if (colors[i] == 'A' && colors[i + 1] == 'A' && colors[i + 2] == 'A')
            {
                cnt1++;
            }
            if (colors[i] == 'B' && colors[i + 1] == 'B' && colors[i + 2] == 'B')
            {
                cnt2++;
            }
        }
        if (cnt1 > cnt2)
        {
            return true;
        }
        return false;
    }
};