class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        unordered_map<int, int> map;

        for (int val : nums)
        {
            map[val]++;
        }

        int count = 0;
        int max = -1;
        for (auto &pair : map)
        {
            max = max(max, pair.second);
        }

        for (auto &pair : map)
        {
            if (pair.second == max)
            {
                count += max;
            }
        }
        return count;
    }
};