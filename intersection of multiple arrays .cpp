class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ans;
        // sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            sort(nums[i].begin(),nums[i].end());
        }

        map<int,int> counts;

        for(auto row:nums){
            for(auto elem:row){
                if(counts.find(elem)==counts.end()){
                    counts[elem]=1;
                }
                else{
                    counts[elem]++;
                }
            }
        }

        for(auto x:counts){
            if(x.second>=nums.size()){
                ans.push_back(x.first);
            }
        }

        
        return ans;
    }
};
