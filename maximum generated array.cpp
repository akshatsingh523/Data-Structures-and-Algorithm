class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0)
        return 0;
        vector<int> nums;
        nums.push_back(0);
        nums.push_back(1);
        int j=0;
        for(int i=2;i<=n;i++){
            if(i%2==0){
                j=i/2;
                nums.push_back(nums[j]);
            }
            else{
                j=(i-1)/2;
                nums.push_back(nums[j]+nums[j+1]);
            }
        }

        sort(nums.begin(),nums.end(),greater<int>());
        return nums[0];
    }
};
