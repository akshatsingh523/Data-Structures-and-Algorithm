class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> c;
        for(int i=0;i<nums.size();i++){
            c.insert(nums[i]);
        }
        for(int i=0;i<c.size();i++){
            if(c.find(original)!=c.end()){
                original=2*original;
            }
        }
        return original;
    }
};
