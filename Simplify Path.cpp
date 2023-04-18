class Solution {
public:
    string simplifyPath(string path) {
        int i = path.size()-1;
        string ans = ""; 
        int count=0;
        while(i>=0){
            string temp = "";
            while(i>=0 && path[i] !='/'){
                temp += path[i];
                i--;
            }
            i--;
            if(temp == "" || temp == "."){
                continue;
            }
            if(temp == ".."){
                count++;
            }
            else if(count>0){
                count--;
            }
            else
            {

                ans+=temp;
                ans+= "/";
            }
            

        }
        reverse(ans.begin(), ans.end());
        if(ans == ""){
            return "/";
        }
        return ans;
    }
};