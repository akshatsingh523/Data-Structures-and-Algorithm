class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(auto x:s){
            if(x>=97 && x<=122){
                cout<<x;
                s1+=tolower(x);
            }
            else if(x>=65 && x<=90){
                cout<<x;
                s1+=tolower(x);
            }
            else if(x>=48 && x<=57) {
                cout<<x;
                s1+=tolower(x);
            }
            else{ 
                continue;
            }
        }
        string s2=s1;
        reverse(s1.begin(),s1.end());
        // cout<<s1<<" "<<s2<<endl;
        if(s1==s2){
            return true;
        }   
        return false;
    }
};
