class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size(), temp = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            temp += nums[i];
        }
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
        return sum - temp;
    }
};