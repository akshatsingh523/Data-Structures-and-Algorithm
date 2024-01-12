class Solution {
private:
    int helper(int i,int left,vector<int>& nums,vector<int>& multipliers,vector<vector<int>>& memo){
        if(memo[i][left]!=INT_MIN) return memo[i][left];
        if(i==multipliers.size()) return 0;
        int right=nums.size()-1-i+left;
        return memo[i][left]=max((multipliers[i]*nums[left]+helper(i+1,left+1,nums,multipliers,memo)),(multipliers[i]*nums[right]+helper(i+1,left,nums,multipliers,memo)));
    }
public:
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        vector<vector<int>>memo(multipliers.size()+1,vector<int>(nums.size()+1,INT_MIN));
        return helper(0,0,nums,multipliers,memo);
    }
};