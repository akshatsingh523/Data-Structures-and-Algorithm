class Solution {
public:
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        string pal=s;
        reverse(pal.begin(),pal.end());
        if(pal==s){
            return true;
        }
        string s1="";
        string s2="";
        int flag=0;
        string orignal =s;
        while(i<j){
            if(s[i]!=s[j]){
                s.erase(i,1);
                s1=s;
                reverse(s.begin(),s.end());
                if(s1==s){
                    flag=1;
                }
                s=orignal;
                s.erase(j,1);
                s2=s;
                reverse(s.begin(),s.end());
                if(s2==s){
                    flag=1;
                }
                break;
            }
            else{
                i++;
                j--;
            }
        }
        if(flag==1){
            return true;
        }
        else{
            return false;
        }
    }
};
