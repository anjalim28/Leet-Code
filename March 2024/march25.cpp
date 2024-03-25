class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;
        unordered_set<int> st;

        for (int num : nums)
        {
            if (st.find(num) != st.end())
            {
                ans.push_back(num);
            }
            else
            {
                st.insert(num);
            }
        }
        return ans;
    }
};