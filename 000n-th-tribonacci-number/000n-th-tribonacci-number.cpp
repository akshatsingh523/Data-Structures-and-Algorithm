class Solution {
private:
    int helper(int n, std::vector<int>& memo) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;

        if (memo[n] == -1) {
            memo[n] = helper(n - 1, memo) + helper(n - 2, memo) + helper(n - 3, memo);
        }

        return memo[n];
    }

public:
    int tribonacci(int n) {
        vector<int> memo(n + 1, -1);
        return helper(n, memo);
    }
};
