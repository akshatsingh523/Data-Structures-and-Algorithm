class Solution {
private:
    vector<vector<int>> memo;
private:
    int helper(vector<int>& prices,int idx,int holding){
        if(idx==prices.size()) return 0;
        if(memo[idx][holding]!=-1) return memo[idx][holding];
        int do_something=0,do_nothing=0;
        if(holding==2){
            do_nothing=helper(prices,idx+1,0);
        }
        if(holding==1){
            do_something=prices[idx]+helper(prices,idx+1,2);
            do_nothing=helper(prices,idx+1,1);
        }
        if(holding==0){
            do_something=-prices[idx]+helper(prices,idx+1,1);
            do_nothing=helper(prices,idx+1,0);
        }
        return memo[idx][holding]=max(do_something,do_nothing);
    }
public:
    int maxProfit(vector<int>& prices) {
        memo.assign(prices.size(),vector<int>(3,-1));
        return helper(prices,0,0);
    }
};