class Solution
{
public:
    vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
    {
        vector<vector<int>> result;
        int i = 0, n = intervals.size();
        while (i < n && intervals[i][1] < newInterval[0])
        {
            result.push_back(intervals[i++]);
        }
        vector<int> mergedInt = newInterval;
        while (i < n && intervals[i][0] <= newInterval[1])
        {
            mergedInt[0] = min(mergedInt[0], intervals[i][0]);
            mergedInt[1] = max(mergedInt[1], intervals[i++][1]);
        }
        result.push_back(mergedInt);
        while (i < n)
        {
            result.push_back(intervals[i++]);
        }
        return result;
    }
};