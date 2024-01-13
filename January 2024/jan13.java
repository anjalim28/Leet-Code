class Solution {
public:
    int minSteps(string s, string t) {
        int arr[26] = {0};
        for(int i =0;i<s.length();i++){
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        int count =0;
        for(int i : arr){
            count+= abs(i);
        }
        return count/2;
    }
};
