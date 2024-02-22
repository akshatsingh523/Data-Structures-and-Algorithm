class Solution {
private:
    int helper(vector<int>& nums){
        int local=nums[0];
        int optimal=nums[0];
        for(int i=1;i<nums.size();i++){
            local=max(local+nums[i],nums[i]);
            optimal=max(local,optimal);
        }
        return optimal;
    }
    int helper2(vector<int>& nums){
        int local=nums[0];
        int optimal=nums[0];
        for(int i=1;i<nums.size();i++){
            local=min(local+nums[i],nums[i]);
            optimal=min(local,optimal);
        }
        return optimal;
    }
    int summation(vector<int>& nums){
        return accumulate(nums.begin(),nums.end(),0);
    }
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=summation(nums);
        int maxi=helper(nums);
        int mini=helper2(nums);
        if(sum==mini){
            return maxi;
        }
        int circular=sum-mini;
        return max(circular,maxi);
    }
};