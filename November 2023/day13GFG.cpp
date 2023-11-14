
class Solution
{
    public:
    int shortestCommonSupersequence(string x, string y, int m, int n)
    {
        int arr[m+1][n+1];

        for(int i = 0; i <= m; i++){
            for(int j = 0; j <= n; j++){
                if(i == 0 || j == 0){
                    arr[i][j] = 0;
                }
                else if(x[i-1] == y[j-1]){
                    arr[i][j] = arr[i-1][j-1] + 1;
                }
                else{
                    arr[i][j] = max(arr[i][j-1], arr[i-1][j]);
                }
            }
        }
        int lcsLength = arr[m][n];
        return m + n - lcsLength;
    }
};
