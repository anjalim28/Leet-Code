class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n, 1));
        int left=0, right=n-1, top=0, down=n-1, val=1;
        while(left<=right && top<=down){
            for(int j=left; j<=right; j++){
                ans[top][j] = val;
                val++;
            }
            top++;
             for(int i=top; i<=down; i++){
                ans[i][right] = val;
                val++;
            }
            right--;
             for(int j=right; j>=left; j--){
                ans[down][j] = val;
                val++;
            }
            down--;
             for(int i=down; i>=top; i--){
                ans[i][left] = val;
                val++;
            }
            left++;
        }
        return ans;

        
    }
};