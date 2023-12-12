class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int mul = 1;
        sort(nums.begin(), nums.end(), greater<int>());
        mul = (nums[0] - 1) * (nums[1] - 1);
        return mul;
    }
};