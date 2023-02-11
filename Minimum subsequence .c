class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> arr;
        int x=0;
        int ts=0;
        int cs=0;
        sort(nums.begin(), nums.end(), greater<int>());
        ts=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();i++){
            cs=cs+nums[i];
            cout<<i<<cs<<endl;
            if(cs>(ts-cs)){
                x=i; 
                break;
            }
        }
        for(int i=0;i<=x;i++){
            arr.push_back(nums[i]);
        }
        return arr;  
    }
};
