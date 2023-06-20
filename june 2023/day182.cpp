#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int n = gain.size(), sum = 0;
        vector<int> alt;
        alt.push_back(gain[0]);
        for (int i = 0; i < n - 1; i++)
        {
            sum = gain[i] + gain[i + 1];
            gain[i + 1] = sum;
            alt.push_back(sum);
            // break;
        }
        return *max_element(alt.begin(), alt.end());
    }
};

int main(){
    vector<int> v;
    v.push_back(52);
    v.push_back(-91);
    v.push_back(72);
    Solution s;
    
    cout << s.largestAltitude(v);
    

}