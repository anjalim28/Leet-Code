class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> result;
        result.push_back(vector<int>());
        for (int i : nums) {
            int idx = 0;
            while (idx < result.size() && find(result[idx].begin(), result[idx].end(), i) != result[idx].end()){
                idx++;
            }

            if (idx < result.size()) {
                result[idx].push_back(i);
            } else {
                result.push_back(vector<int>{i});
            }
        }

        return result;
    }
};

