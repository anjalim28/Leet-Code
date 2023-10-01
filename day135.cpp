class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        // int n = nums1.size(), m = nums2.size();
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        vector<int> diff1, diff2;
        for(int i:set1){
            if(set2.count(i)==0){
                diff1.push_back(i);
            }
        }
        for(int i:set2){
            if(set1.count(i)==0){
                diff2.push_back(i);
            }
        }
        return {diff1, diff2};
    }
};