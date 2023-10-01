class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string temp = "";
        string ans = "";
        for (auto x : s) {
            if (x != ' ') {
                temp += x;
            }
            else {
                reverse(temp.begin(), temp.end()); 
                ans += temp + " ";
                temp = ""; 
            }
        }
        reverse(temp.begin(), temp.end()); 
        ans += temp; 
        return ans;
    }
};
