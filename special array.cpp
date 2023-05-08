class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int ans=0;
        for(int i=1;i<=nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[j]>=i){
                    count++;
                }
            }
            if(count==i){
                ans=i;
            }
            count=0;
        }
        if(ans!=0)
        return ans;
        else
        return -1;
    }
};
