class Solution {
public:
    int n;
    vector<int> max_idx;
    int left=0;
    void print(){
        cout<<"[";
        for(int i=left; i<max_idx.size(); i++) 
            cout<<max_idx[i]<<",";
        cout<<"]\n";
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        n=nums.size();       
        vector<int> ans(n-k+1);

        for(int i=0; i<n; i++){ 
            while(max_idx.size()>left && nums[i]>=nums[max_idx.back()]) 
                max_idx.pop_back();
            max_idx.push_back(i);  

            if (max_idx[left]==i-k)
                left++;  
            if (i>=k-1){
                ans[i-k+1]=nums[max_idx[left]]; 
            }        
        }
        return ans;
    }
};
