class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> pascal;
        long start = 1;
        pascal.push_back(start);
        for (int i = 0; i < rowIndex; i++) {
            start *= (rowIndex - i);
            start /= (i + 1);
            pascal.push_back(start);
        }
        return pascal;
    }
};
