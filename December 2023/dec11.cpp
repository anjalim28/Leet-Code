class Solution
{
public:
    int findSpecialInteger(vector<int> &arr)
    {
        int n = arr.size();
        int perc = n / 4;
        int maxm = arr[0], count = 1;
        for (int i = 1; i < n; i++)
        {
            if (maxm == arr[i])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            if (count > perc)
            {
                return arr[i];
            }
            maxm = arr[i];
        }
        return maxm;
    }
};