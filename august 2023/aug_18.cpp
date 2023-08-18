class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        // int m = roads[0].size();
        unordered_map<int, unordered_set<int>> adj; //creating an adjacency matrix;
        for(auto &road : roads){
            int u = road[0];
            int v = road[1];

            adj[u].insert(v);
            adj[v].insert(u);
        }
        int maxm = 0;
        for(int i=0; i<n; i++){
            for(int j = i+1; j<n; j++){
                int i_rank = adj[i].size();
                int j_rank = adj[j].size();

                int rank = i_rank + j_rank;
                if(adj[i].find(j)!=adj[i].end()){
                    rank--;
                }
                maxm = max(maxm, rank);
            }
        }
    return maxm;
    }
};