int isPossible(int n , int coins[]) 
    {
        int sum=0;
        for(int i=0 ; i<n ; i++){
            sum+=coins[i];
        }
        if(sum<20) return 0;
        if(sum==20 || sum==24 || sum==2024) return 1;
        vector<vector<int>> v(n,vector<int> (sum+1,0));
        v[0][0]=1;
        v[0][coins[0]]=1;
        for(int i=0 ; i<n-1 ; i++){
            for(int j=0 ; j<=sum ; j++){
                if(v[i][j] && i+1<n && j+coins[i+1]<=sum){
                    v[i+1][j+coins[i+1]]=1;
                    v[i+1][j]=1;
                }
            }
        }
        
        for(int i=1 ; i<=sum ; i++){
            if(v[n-1][i] && (i%20==0 || i%24==0 || i==2024)) return 1;
        }
        return 0;
        
    }
