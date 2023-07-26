class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        // int m = intervals[0].size();
        int count = 0, x = intervals[0][1];
        for (int i = 0; i < n; i++)
        {
            if (x > intervals[i][0])
            {
                x = min(x, intervals[i][1]);
                count++;
            }
            else
            {
                x = intervals[i][1];
            }
        }
        return count - 1;
    }
};