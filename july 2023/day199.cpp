class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int n = nums.size();
        int i = 0, j = 0, sum = 0, minm = INT_MAX;
        while (j < n)
        {
            sum += nums[j];
            while (sum >= target)
            {
                sum -= nums[i];
                minm = min(j - i + 1, minm);
                i++;
            }
            j++;
        }
        if (minm == INT_MAX)
        {
            return 0;
        }
        return minm;
    }
};