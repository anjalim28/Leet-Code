class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
       unordered_map<int, int> len;
       int x=1;
       for(auto i: arr){
           x = max(x, len[i] = 1+len[i-difference]);
       }
       return x;
    }
};