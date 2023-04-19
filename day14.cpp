<<<<<<< HEAD
#include<iostream>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
        for(int i=0;i<word.length();i++)
        {
            if(word[i]>='A' && word[i]<='Z')
                count++;
        }
        if(count==0 || count == word.length() || (count==1 && word[0]>='A'&& word[0]<='Z'))
        {
            return true;
        }
        else
        {
        return false;
        }
    }
};
int main(){
    Solution b;
    cout<<b.detectCapitalUse("ffffffffffF");
    
    return 0;
=======
#include<iostream>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
        for(int i=0;i<word.length();i++)
        {
            if(word[i]>='A' && word[i]<='Z')
                count++;
        }
        if(count==0 || count == word.length() || (count==1 && word[0]>='A'&& word[0]<='Z'))
        {
            return true;
        }
        else
        {
        return false;
        }
    }
};
int main(){
    Solution b;
    cout<<b.detectCapitalUse("ffffffffffF");
    
    return 0;
>>>>>>> 4f8dc421c25710817d68f1dbfb465179d06fa6d0
}