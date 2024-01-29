class Solution {
private:
    int helper(vector<int>& nums, int idx, int prev_idx, int n, vector<vector<int>>& dp) {
        if (idx >= n) return 0;
        if (dp[idx][prev_idx+1] != -1) return dp[idx][prev_idx+1];
        
        // include
        int inc=0;
        if(prev_idx==-1 || nums[idx]>nums[prev_idx]){
            inc=1+helper(nums,idx+1,idx,n,dp);
        }
        // not include
        int not_inc=helper(nums,idx+1,prev_idx,n,dp);
        
        return dp[idx][prev_idx+1]=max(inc,not_inc);
    }

public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
        return helper(nums, 0, -1, n, dp);
    }
};
