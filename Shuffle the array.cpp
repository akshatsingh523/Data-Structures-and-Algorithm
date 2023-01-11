class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size());
        int x=0;
        for(int i=0;i<n;i++){
            ans[x]=nums[i];
            x+=2;
        }
        x=1;
        for(int i=n;i<nums.size();i++){
            ans[x]=nums[i];
            x+=2;
        }
        return ans;
    }
};
