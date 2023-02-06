class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x=nums.size();
        return (nums[x-1]*nums[x-2])-(nums[0]*nums[1]);  
    }
};
