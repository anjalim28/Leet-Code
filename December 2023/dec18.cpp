class Solution
{
public:
    int maxProductDifference(vector<int> &nums)
    {
        int n = nums.size(), m1 = 1, m2 = 1, diff = 0;
        sort(nums.begin(), nums.end());
        m1 = nums[0] * nums[1];
        m2 = nums[n - 1] * nums[n - 2];
        diff = m2 - m1;
        return diff;
    }
};