class Solution {
private:
    vector<int> dp;
    int helper(int i,string s,set<string>& wordDict){
        if(i==s.size()) return 1;
        string temp;
        if(dp[i]!=-1) return dp[i];
        for(int j=i;j<s.size();j++){
            temp+=s[j];
            if(wordDict.find(temp)!=wordDict.end()){
                if(helper(j+1,s,wordDict)) return dp[i]=1;
            }
        }
        return dp[i]=0;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> st;
        dp.assign(301,-1);
        for(auto a:wordDict) st.insert(a);
        return helper(0,s,st);
    }
};