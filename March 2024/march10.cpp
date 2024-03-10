class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        // int n = nums1.size();
        int m = nums2.size();
        unordered_map<int, int> mp;
        vector<int> ans;
        for (auto i : nums1)
        {
            mp[i]++;
        }
        for (auto i : nums2)
        {
            if (mp.find(i) != mp.end())
            {
                ans.push_back(i);
                mp.erase(i);
            }
        }
        return ans;
    }
};