class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> dup;
        for(auto x:nums){
            dup.push_back(x);
        }
        sort(nums.begin(),nums.end(),greater<int>());
        int x=nums[0];
        int flag=0;
        int idx=0;
        for(int i=0;i<dup.size();i++){
            if(x==dup[i]){
                idx=i;
            }
            
        }
        
        for(int i=1;i<nums.size();i++){
            if(x<2*nums[i]){
                flag=1;
            }
        }
        if(flag==0)
            return idx;
        else
            return -1;
        
    }
};
