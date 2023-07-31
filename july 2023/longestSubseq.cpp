#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        vector<int> ans;
        ans.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > ans.back())
            {
                ans.push_back(nums[i]);
            }
            else
            {
                int index = lower_bound(ans.begin(), ans.end(), nums[i]) - ans.begin();
                ans[index] = nums[i];
            }
        }
        return ans.size();
    }
};
int main()
{
    vector<int> v;
    int arr[] = {10, 9, 2, 5, 3, 7, 101, 18};
    for (int i = 0; i < 8; i++)
    {
        v.push_back(arr[i]);
    }
    Solution s;
    cout << s.lengthOfLIS(v);
}