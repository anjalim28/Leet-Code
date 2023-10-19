class Solution {
public:
    string check(string str)
    {
        string ans;
        for(char c : str)
        {
            if(c == '#' && !ans.empty())
            {
                ans.pop_back();
            }
            else if(c != '#')
            {
                ans.push_back(c);
            }
        }
        return ans;
    }
    bool backspaceCompare(string s, string t) {
        if(check(s) == check(t))
        {
            return true;
        }
        return false;
    }
};