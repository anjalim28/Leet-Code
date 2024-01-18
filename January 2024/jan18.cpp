class Solution
{
public:
    int climbStairs(int n)
    {
        int step2before = 0, step1before = 1, cur = 0;
        for (int i = 0; i < n; i++)
        {
            cur = step2before + step1before;
            step2before = step1before;
            step1before = cur;
        }
        return cur;
    }
};