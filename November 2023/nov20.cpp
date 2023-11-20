#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
class Solution
{
public:
    int garbageCollection(vector<string> &garbage, vector<int> &travel)
    {
        int ans = 0;
        int n = garbage.size();
        bool m = false, p = false, g = false;
        for (int i = n - 1; i >= 0; --i)
        {
            if (!g && garbage[i].find('G') != string::npos)
            {
                g = true;
                ans += accumulate(travel.begin(), travel.begin() + i, 0);
            }
            if (!m && garbage[i].find('M') != string::npos)
            {
                m = true;
                ans += accumulate(travel.begin(), travel.begin() + i, 0);
            }
            if (!p && garbage[i].find('P') != string::npos)
            {
                p = true;
                ans += accumulate(travel.begin(), travel.begin() + i, 0);
            }
            if (m && p && g)
            {
                break;
            }
        }
        return ans + accumulate(garbage.begin(), garbage.end(), 0, [](int sum, const string &str)
                                     { return sum + str.size(); });
    }
};