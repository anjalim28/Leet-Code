class Solution
{
public:
    int n, m;
    int t[1001][1001];

    // taking &s1 and &s2 so that values go by reference. copy of s1, s2 is not made again and again.
    int solve(int i, int j, string &s1, string &s2)
    {
        if (i >= m && j >= n)
        {
            return 0; // when s1, s2 both are empty.
        }
        if (t[i][j] != -1)
        {
            return t[i][j];
        }

        if (i >= m)
        {
            return t[i][j] = s2[j] + solve(i, j + 1, s1, s2); // when s1 is empty and i is out of bound.
        }
        else if (j >= n)
        {
            return t[i][j] = s1[i] + solve(i + 1, j, s1, s2); // when s2 is empty and j is out of bound.
        }

        if (s1[i] == s2[j])
        {
            return t[i][j] = solve(i + 1, j + 1, s1, s2); // both the characters are equal so we increment the indices.
        }

        // TWO POSSIILITIES. (when both are not equal)
        int delete_s1_i = s1[i] + solve(i + 1, j, s1, s2); // delete s[i], increment i.
        int delete_s2_j = s2[j] + solve(i, j + 1, s1, s2); // delete s[i], increment i.

        return t[i][j] = min(delete_s1_i, delete_s2_j);
    }

    int minimumDeleteSum(string s1, string s2)
    {
        m = s1.length();
        n = s2.length();

        memset(t, -1, sizeof(t));

        return solve(0, 0, s1, s2); // 0, 0 being the first character of the strings s1, s2 repectively.
    }
};