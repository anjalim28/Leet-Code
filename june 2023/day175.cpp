class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> ans;
        if(n<1){
            return ans;
        }
        for(int i=0; i<n;){
            int low = i, high = i;
            while(high+1 < n && nums[high+1]==nums[high]+1){
                high++;
            }
            if(high>low){
                ans.push_back(to_string(nums[low]) + "->" + to_string(nums[high]));
            }
            else{
                ans.push_back(to_string(nums[high]));
            }
            i = high+1;
        }
return ans;

        
    }
};