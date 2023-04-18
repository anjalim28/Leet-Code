class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        // string temp = "";
        string word = "";
        int i=0, j=0;
        while(i!=n || j!=m){
            if(i!=n){
                word+=word1[i];
                i++;
            }
            if(j!=m){
                word+=word2[j];
                j++;
            }
        }
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<m; j++){
        //         word.append(word1[i]);
        //         // word.push_back(temp);
        //     }
        // }
        return word;
        
    }
};