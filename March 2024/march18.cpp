bool comp(vector<int> &x, vector<int> &y)
{
    return x[1] < y[1];
}
class Solution
{
public:
    int findMinArrowShots(vector<vector<int>> &points)
    {
        if (points.size() == 0)
            return 0; // there are no balloons.
        if (points.size() == 1)
            return 1; // one balloon

        int arrow = 1;
        sort(points.begin(), points.end(), comp);
        int prev = points[0][1];
        for (int i = 1; i < points.size(); i++)
        {
            if (points[i][0] <= prev)
                continue; // overlapping
            arrow++;
            prev = points[i][1];
        }
        return arrow;
    }
};