class Solution {
private:
    unordered_map<int,int> m; 

private:
    int helper(int i,string s){
        if(s[i]=='0') return 0;
        if(m.find(i)!=m.end()){
            return m[i];
        }
        if(i==s.length() || i==s.length()-1){
            return 1;
        }
        int ans=helper(i+1,s);
        if(stoi(s.substr(i,2))<=26){
            ans+=helper(i+2,s);
        }
        return m[i]=ans;
    }
    
public:
    int numDecodings(string s) {
        return helper(0,s);
    }
};