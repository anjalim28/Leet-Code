class Solution
{
public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k)
    {
        int n = nums.size(), count = 0, mul = 1, j = 0;
        for (int i = 0; i < n; i++)
        {
            mul *= nums[i];
            while (j <= i && mul >= k)
            {
                mul /= nums[j];
                j++;
            }
            count += i - j + 1;
        }
        return count;
    }
};