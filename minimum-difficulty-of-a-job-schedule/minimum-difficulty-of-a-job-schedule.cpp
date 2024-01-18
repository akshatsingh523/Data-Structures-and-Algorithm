class Solution {
private:
    vector<vector<int>> memo;
    int solve(vector<int>&jd,int n,int idx,int d){
        if(d==1){
            int maxd=jd[idx];
            for(int i=idx;i<n;i++){
                maxd=max(maxd,jd[i]);
            }
            return maxd;
        }
        if(memo[idx][d]!=-1) return memo[idx][d];
        int maxd=jd[idx];
        int finalresult=INT_MAX;
        for(int i=idx;i<=n-d;i++){
            maxd=max(maxd,jd[i]);
            int result=maxd+solve(jd,n,i+1,d-1);
            finalresult=min(finalresult,result);
        }
        memo[idx][d]=finalresult;
        return finalresult;
    }
public:
    int minDifficulty(vector<int>& jd, int d) {
        int n=jd.size();
        if(n<d) return -1;
        memo.assign(n,vector<int>(d+1,-1));
        return solve(jd,n,0,d);
    }
};