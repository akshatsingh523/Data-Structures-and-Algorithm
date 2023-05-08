class Solution {
public:
    bool canConstruct(string s, int k) {
        map<char,int> m;
        int count1=0;
        int count=0;
        if(s.length()<k){
            return false;
        }
        for(auto x:s){
            m[x]++;
        }
        for(auto x:m){
            if(x.second%2!=0){
                count++;
            }
            if(x.second==1){
                count1++;
            }
        }
        if(count>k){
            return false;
        }
        // else if(count1==k){
        //     return true;
        // }
        else
        return true;
    }
};
