class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int min=nums[0];
        int max=nums[nums.size()-1];
        int ans=0;
        for(int i=max;i>=1;i--){
            if(min%i==0 && max%i==0){
                ans=i;
                break;
            }
        }
        return ans;
    }
};
