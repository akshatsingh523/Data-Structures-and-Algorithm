class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v,v1;
        set<int> res;
        for(int i=0;i<nums.size();i++){
            res.insert(nums[i]);
        }
        for(int i=1;i<=nums.size();i++){
            v.push_back(i);
        }
        
        for(int i=0;i<v.size();i++){
            if(res.find(v[i])==res.end()){
                v1.push_back(v[i]);
            }
        }
        
        return v1;
    }
};
