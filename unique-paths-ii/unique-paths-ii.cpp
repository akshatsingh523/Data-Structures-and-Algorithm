class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
        if (og.size() == 1 && og[0].size() == 1) {
            return (og[0][0] == 0) ? 1 : 0;
        }
        if (og.size() == 1 && og[0].size() != 1) {
            int flag = 0;
            for (int i = 0; i < og[0].size(); i++) {
                if (og[0][i] == 1) {
                    flag = 1;
                    break;
                }   
            }
            if (flag == 1) {
                return 0;
            } else {
                return 1;
            }
        }  
        if (og[0][0] == 1 || og[og.size()-1][og[0].size()-1] == 1) {
            return 0;
        }
        vector<vector<int>> dp(og.size(), vector<int>(og[0].size(), 0));
        dp[0][0] = 1;
        for (int i = 1; i < og.size(); i++) {
            if (og[i][0] == 1)
                break;
            dp[i][0] = 1;
        }
        for (int i = 1; i < og[0].size(); i++) {
            if (og[0][i] == 1)
                break;
            dp[0][i] = 1;
        }
        for (int i = 1; i < og.size(); i++) {
            for (int j = 1; j < og[0].size(); j++) {
                if (og[i][j] == 1) {
                    dp[i][j] = 0;
                } else {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }
            }
        }
        return dp[og.size()-1][og[0].size()-1];
    }
};
