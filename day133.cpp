class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        double avg = 0.0, req=0.0;
        sort(salary.begin(), salary.end());
        if(n<3){
            avg = 0.0;
            
        }
        else{
            for(int i=1; i<n-1; i++){
                req += salary[i];
            }
            avg = req/(n-2);
        }
        return avg;
        
        
    }
};