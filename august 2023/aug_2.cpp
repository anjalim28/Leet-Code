class Solution
{
public:
    int n;
    vector<vector<int>> ans;
    unordered_set<int> s;

    void solve(vector<int> &temp, vector<int> &nums)
    {
        // all the elements have been found.
        if (temp.size() == n)
        {
            ans.push_back(temp);
            return;
        }

        // finding elenet in the set, if it not in the set, then add to temp.
        for (int i = 0; i < n; i++)
        {
            if (s.find(nums[i]) == s.end())
            {
                temp.push_back(nums[i]);
                s.insert(nums[i]);

                // exploring the set
                solve(temp, nums);

                // removing the elements, for the next iteration. (BACKTRACKING)
                temp.pop_back();
                s.erase(nums[i]);
            }
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        n = nums.size();
        vector<int> temp;
        solve(temp, nums); // here giving index is not necessary as the index should start with 0 always,for each iteration.
        return ans;
    }
};