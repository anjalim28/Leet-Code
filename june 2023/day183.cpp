class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        int arr_size = k*2 + 1;
        vector<int> ans(n, -1);
        if(n<arr_size){
            return ans;
        }
        vector<long long> sum(n+1);
        for(int i=0; i<n; i++){
            sum[i+1] = sum[i]+nums[i];
        }
        for(int i=k; i+k<n; ++i){
            ans[i]= (sum[i+k+1]-sum[i-k])/arr_size;
        }
        return ans;
    }
};