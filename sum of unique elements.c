class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int count=0;
        int flag=0;
        int sum=0;
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count==1){
                sum+=nums[i];
            }
            count=0;
        }

        return sum;
    }
};
