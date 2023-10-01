class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int n = mat.size(), sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += mat[i][i];
        }
        int i = 0, j = n - 1;
        while (j > -1)
        {
            sum += mat[i][j];
            i++;
            j--;
        }
        if (n % 2 != 0)
        {
            sum -= mat[(n - 1)/2][(n - 1 )/ 2];
        }
        return sum;
    }
};