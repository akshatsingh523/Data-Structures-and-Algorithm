class Solution {
public:
    int balancedStringSplit(string s) {
        int cr=0;
        int cl=0;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='R'){
                cr++;
            }
            else{
                cl++;
            }
            if(cl==cr){
                count++;
            }
        }
        return count;
    }
};
