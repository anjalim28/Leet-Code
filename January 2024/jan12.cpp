class Solution
{
public:
    bool halvesAreAlike(string s)
    {
        int n = s.length(), count1 = 0, count2 = 0;
        int mid = n / 2;
        string x = "";
        string y = "";
        for (int i = 0; i < mid; i++)
        {
            x += s[i];
        }
        cout << x << endl;
        for (int i = mid; i < n; i++)
        {
            y += s[i];
        }
        cout << y << endl;
        for (int i = 0; i < x.length(); i++)
        {
            if (x[i] == 'a' || x[i] == 'A' || x[i] == 'e' || x[i] == 'E' || x[i] == 'i' || x[i] == 'I' || x[i] == 'o' || x[i] == 'O' || x[i] == 'u' || x[i] == 'U')
            {
                count1++;
            }
        }
        for (int i = 0; i < y.length(); i++)
        {
            if (y[i] == 'a' || y[i] == 'A' || y[i] == 'e' || y[i] == 'E' || y[i] == 'i' || y[i] == 'I' || y[i] == 'o' || y[i] == 'O' || y[i] == 'u' || y[i] == 'U')
            {
                count2++;
            }
        }

        if (count1 == count2)
        {
            return true;
        }
        return false;
    }
};