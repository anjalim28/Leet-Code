class Solution {
public:
    int getMinDiff(int arr[], int n, int k) {
        std::sort(arr, arr + n);
        int minDiff = arr[n - 1] - arr[0];
        int adjMin, adjMax;
        
        for (int i = 0; i < n; i++) {
            adjMin = min(arr[i] - k, arr[0] + k);
            adjMax = max(arr[i - 1] + k, arr[n - 1] - k);
            
            if (adjMin < 0)
                continue;

            minDiff = min(minDiff, adjMax - adjMin);
        }
        
        return minDiff;
    }
};
