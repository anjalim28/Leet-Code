
// class Solution {
// public:
//     int equalPairs(vector<vector<int>>& grid) {
//         map<vector<int>, int> hashmap;
//         int ans = 0;
//         int row = grid.size();
//         int col = grid[0].size();
//         for (int i=0; i<row; i++) {
//             hashmap[grid[i]]++;
//         }
//         for (int j=0; j<col; j++) {
//             vector<int> curr;
//             for (int i=0; i<row; i++) {
//                 curr.emplace_back(grid[i][j]);
//             }
//             ans += hashmap[curr];
//         }
//         return ans;
//     }
// };
class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        int count = 0;
        bool flag;
        int n = grid.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                flag = true;
                for (int k = 0; k < n; k++)
                {
                    if (grid[i][k] == grid[k][j])
                    {
                        continue;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    count++;
                }
            }

        }
            return count;
    }
};