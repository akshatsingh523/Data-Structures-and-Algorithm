class Solution {
private:
    vector<vector<vector<int>>> memo;
private:
    int helper(std::vector<int>& prices, int k, int idx, int holding) {
        if (k == 0 || idx == prices.size()) {
            return 0;
        }
        if(memo[idx][k][holding]!=-1){
            return memo[idx][k][holding];
        }
        int do_nothing=helper(prices, k, idx + 1, holding);;
        int do_something;
        if(holding==1){
            do_something=prices[idx]+helper(prices,k-1,idx+1,0);
        }
        else{
            do_something=-prices[idx]+helper(prices,k,idx+1,1);
        }

        return memo[idx][k][holding]=max(do_something,do_nothing);
    }

public:
    int maxProfit(int k, std::vector<int>& prices) {
        memo.resize(prices.size(),vector<vector<int>>(k+1,vector<int>(2,-1)));
        return helper(prices, k, 0, 0);
    }
};