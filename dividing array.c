class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int flag=1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]) 
                count++;
            }
            if(count%2!=0)
                flag=1;
            else
                flag=0;    
             count=0;
        }
        if(flag==0)
        return true;
        else
        return false;
    }
};
