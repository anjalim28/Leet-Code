#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string &s)
{
    string ans="";
    unordered_set<char> st;
    for(auto x:s)
       st.insert(x);

    unordered_set<char> :: iterator itr;
    for (itr = st.begin(); itr != st.end(); itr++)
        ans += *itr;

    return ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<removeDuplicates(s);
}