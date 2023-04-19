#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
{
    int n = spells.size();
    int m = potions.size();
    int count = 0;
    vector<int> successful;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < potions.size(); j++)
        {
            if (spells[i] * potions[j] >= success)
                count++;
        }
        successful.push_back(count);
        count = 0;
    }

    return successful;
}

int main()
{
    vector<int> arr{5, 1, 3};
    vector<int> arr2{1, 2, 3, 4, 5};
    long long n = 7;
    successfulPairs(arr, arr2, n);

    return 0;
}