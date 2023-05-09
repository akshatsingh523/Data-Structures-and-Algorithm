class Solution {
public:
    int numSub(string s) {
        long long count=1;
        long long res=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                res+=count;
                count++;
            }
            else{
                count=1;
            }
        }
        return res%1000000007;
    }
};
