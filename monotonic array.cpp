class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> inc;
        vector<int> dec;
        int flag=0;
        int flag1=0;
        for(auto x:nums){
            inc.push_back(x);
        }
        for(auto x:nums){
            dec.push_back(x);
        }
        sort(inc.begin(),inc.end());
        sort(dec.begin(),dec.end(),greater<int>());
        int i=0,j=0;
        while(i<nums.size() && j<inc.size()){
            if(nums[i]!=inc[j]){
                flag=1;
                break;
            }
            else{
                i++;j++;
            }
        }
        i=0,j=0;
        while(i<nums.size() && j<dec.size()){
            if(nums[i]!=dec[j]){
                flag1=1;
                break;
            }
            else{
                i++;j++;
            }
        }
        if(flag==1 && flag1==1){
            return false;
        }
        return true;
    }
};
