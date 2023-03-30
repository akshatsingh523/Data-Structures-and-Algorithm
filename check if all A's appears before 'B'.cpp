class Solution {
public:
    bool checkString(string s) {
        int j=0;
        int flag=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='b'){
                j=i;
                flag=1;
                break;
            }
        }

        if(flag==1){
            for(int i=j;i<s.length();i++){
            if(s.length()!=1 && s[i]=='a'){
                return false;
            }
        }
        }

        // else{
        //     return true;
        // }
        return true;
    }
};
