class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int n = arr.size();
        while (n >= 3)
        {
            for (int i = 1; i < n - 1; i++)
            {
                if ((arr[i] > arr[i - 1]) && (arr[i] > arr[i + 1]))
                {
                    return i;
                }
            }
        }
        return -1;
    }
};