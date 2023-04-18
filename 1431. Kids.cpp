class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
         int maxi =0;
        vector<bool> ans;
        for(int i=0; i<n; i++){
               maxi = max(candies[i], maxi);
        }
        for(int i=0; i<n; i++){
            candies[i]+= extraCandies;
            if(candies[i]>=maxi){
              ans.push_back(true);
           }
           else
           {
               ans.push_back(false);
           }

        }
        return ans;
        
    }
};