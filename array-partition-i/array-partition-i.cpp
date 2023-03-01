class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum=0;
        sort(nums.begin(),nums.end());
        int x=0;
        int y=0;
        int i=0;
        while(i+2<=nums.size()){
            x=nums[i];
            y=nums[i+1];
            sum+=min(x,y);
            i=i+2;
        }
        return sum;
    }
};