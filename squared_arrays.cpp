class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int x=nums.size();
        vector<int> arr(x);
        for(int i=0;i<x;i++){
            arr[i]=pow(nums[i],2);
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
    // for(int i=0;i<x;i++){
    //     cout<<arr[i];
    // }
    // return nums;
};
