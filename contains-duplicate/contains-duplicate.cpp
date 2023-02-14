class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s1;
        if(nums.size()==0 || nums.size()==1){
            return false;
        }
        
        for(int i=0;i<nums.size();i++){
            if(s1.find(nums[i])==s1.end()){
                s1.insert(nums[i]);
            }
            else{
                return true;
            }
            
        }
        return false;
    }
};