class Solution {
private:
    int helper(int idx, int cost, vector<int>& nums, vector<int>& memo) {
        if (idx >= nums.size()) {
            return cost;
        }
        if (memo[idx] != -1) {
            return memo[idx]+cost;
        }
        int x = helper(idx + 1, cost, nums, memo);
        int y = helper(idx + 2, cost + nums[idx], nums, memo);
        memo[idx] = max(x, y);
        return memo[idx];
    }

public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> memo(n, -1);
        int idx = 0;
        int cost = 0;
        return helper(idx, cost, nums, memo);
    }
};