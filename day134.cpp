class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        int n = nums.size();
        long prod = 1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                return 0;
            }
            else if (nums[i] < 0)
            {
                prod *= -1;
            }
        }

        return prod;
    }
};