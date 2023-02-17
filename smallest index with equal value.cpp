class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        vector<int> op;
        for(int i=0;i<nums.size();i++){
            if(i%10==nums[i]){
                op.push_back(i);
            }
        }
        sort(op.begin(),op.end());
        if (op.size() > 0) {
        return op[0];
        } else {
        return -1; // or any other value to indicate no valid index found
        }
    }
};
