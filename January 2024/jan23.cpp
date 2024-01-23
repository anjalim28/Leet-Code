class Solution
{
public:
    bool hasDuplicate(string &s1, string &s2)
    {
        int arr[26] = {0};
        for (char &c : s1)
        {
            if (arr[c - 'a'] > 0) // if arr = {"aa", "bb"}; i.e duplicates exists in the arr the string itself.
            {
                return true;
            }
            arr[c - 'a']++; // checks the frequency
        }
        for (char &c : s2)
        {
            if (arr[c - 'a'] > 0) // if arr = {"aa", "bb"}; i.e duplicates exists in the arr the string itself.
            {
                return true;
            }
        }
        return false;
    }

    int solve(int i, vector<string> &arr, string temp, int n)
    {
        if (i >= n)
        {
            return temp.length();
        }
        int inc = 0, exc = 0;
        if (hasDuplicate(temp, arr[i]))
        {
            exc = solve(i + 1, arr, temp, n);
        }
        else
        {
            exc = solve(i + 1, arr, temp, n);
            inc = solve(i + 1, arr, temp + arr[i], n);
        }
        return max(inc, exc);
    }

    int maxLength(vector<string> &arr)
    {
        string temp = "";
        int n = arr.size();
        int i = 0;
        return solve(i, arr, temp, n);
    }
};