// class Solution {
// private:
//     vector<vector<int>> dp;
    
//     int helper(vector<int>& prices, int fee, int i, int hold) {
//         if (i == prices.size()) return 0;
//         if (dp[i][hold] != -1) return dp[i][hold];
        
//         int buy = 0, take = 0, leave = 0;
//         int result = 0;
        
//         if (hold == 0) {
//             buy = -prices[i] + helper(prices, fee, i + 1, 1) - fee;
//             leave = helper(prices, fee, i + 1, 0);
//             result = max(buy, leave);
//         } else {
//             take = prices[i] + helper(prices, fee, i + 1, 0);
//             leave = helper(prices, fee, i + 1, 1);
//             result = max(take, leave);
//         }
        
//         return dp[i][hold] = result;
//     }

// public:
//     int maxProfit(vector<int>& prices, int fee) {
//         int n = prices.size();
//         dp.assign(n, vector<int>(2, -1));
//         return helper(prices, fee, 0, 0);
//     }
// };



class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<int> hold(n);
        vector<int> free(n);
        hold[0]=-prices[0];
        for(int i=1;i<n;i++){
            hold[i]=max(hold[i-1],free[i-1]-prices[i]);
            free[i]=max(free[i-1],hold[i-1]+prices[i]-fee);
        }
        return free[n-1];
    }
};