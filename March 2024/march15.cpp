class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size(), prod = 1, count = 0;
        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                prod *= nums[i];
            }
            else
            {
                count++;
            }
        }
        if (count > 1)
        {
            return ans;
        }
        else if (count == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (nums[i] == 0)
                {
                    ans[i] = prod;
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                ans[i] = prod / nums[i];
            }
        }
        return ans;
    }
};