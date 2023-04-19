<<<<<<< HEAD
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
=======
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
>>>>>>> 4f8dc421c25710817d68f1dbfb465179d06fa6d0
};